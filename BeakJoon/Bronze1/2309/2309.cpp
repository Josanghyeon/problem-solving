#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // sum = 일곱난쟁이가 아닌 두명의 합
    int i, j, x, sum = -100;
    vector<int> nineNanjag;
    for (i = 0; i < 9; i++)
    {
        cin >> x;
        nineNanjag.push_back(x);
        sum += x;
    }

    vector<int> sevenNanjag;
    //두 명 탐색
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (sum == nineNanjag[i] + nineNanjag[j] && i != j)
            {
                for (x = 0; x < 9; x++)
                {
                    if (x != i && x != j)
                        sevenNanjag.push_back(nineNanjag[x]);
                }
                x = 101;
                break;
            }
        }
        if (x > 100)
            break;
    }

    sort(sevenNanjag.begin(), sevenNanjag.end());
    //일곱난쟁이 출력
    for (i = 0; i < 7; i++)
    {
        cout << sevenNanjag[i] << endl;
    }
}