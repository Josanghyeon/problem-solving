#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// 리모컨의 숫자 버튼 상태를 나타내는 vector
// 0 : 정상, 1 : 고장
vector<bool> remote(10);

// 입력 : n (0 ~ 1000000) - 이동하려고 하는 채널
//       -  1000000까지인 이유?
//          => 문제에서 이동하려고 하는 채널 N의 범위가 0 ~ 500000 이지만,
//             이동하려는 채널보다 높은 위치에 있을 때 감소하는 범위도 고려해야 하므로..
// 출력 : len - 리모컨을 누른 횟수
int check(int n)
{
    if (n == 0)
    {
        if (remote[0])
            // 리모컨의 "0" 버튼이 고장난 경우
            return 0;
        else
            // 리모컨의 "0" 버튼이 정상인 경우 : 리모컨으로 0을 누르면 되므로 1을 리턴
            return 1;
    }

    int len = 0;
    // 각 자리수에 대해서 나머지 연산을 통해 한 자리수씩 뽑아내어 고장난 버튼이 있는지 판별
    while (n > 0)
    {
        // 리모컨의 버튼이 고장난 경우
        if (remote[n % 10])
            // remote[3456 % 10] = remote[6] => 리모컨의 6 버튼이 고장인 경우
            return 0;

        // 리모컨의 버튼이 고장나지 않은 경우
        n = n / 10;
        len++;
    }
    // 리모컨을 누른 횟수 반환
    return len;
}

int main()
{
    int N, broke = 0, x, i;
    cin >> N >> broke;

    int count = abs(N - 100);

    for (i = 0; i < broke; i++)
    {
        cin >> x;
        remote[x] = true;
    }

    for (i = 0; i <= 1000000; i++)
    {
        // len : i에 대해 반환된 리모컨을 누른 횟수
        int len = check(i);
        // 만약 len이 0보다 크다면
        if (len > 0)
        {
            // press : 누른 번호에서 이동하려하는 채널까지의 사용해야 하는 연산자(+, -) 횟수 계산
            int press = abs(i - N);
            // 최초 100번 채널에서, 연산자만 가지고 몇번을 눌러야 도달할 수 있는지에 대한 count 변수와,
            // (리모컨에서 누른 번호에서부터 이동하려하는 채널까지 연산자를 눌러야하는 횟수)
            // + (c에 대해 반환된 리모컨을 누른 횟수)를 비교하여 더 작은 값을 count에 저장
            if (count > press + len)
                count = press + len;
        }
    }
    cout << count;
}