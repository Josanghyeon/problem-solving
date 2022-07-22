#include <iostream>

using namespace std;

void space(int block)
{
    for (int i = 0; i < block; i++)
        cout << "_";
}

int wornl(int N, int block)
{
    if (N <= 0)
    {
        for (int i = 0; i < block; i++)
            cout << "_";
        cout << "\"재귀함수가 뭔가요?\"" << endl;
        space(block);
        cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << endl;
        while (block > 0)
        {
            space(block);
            cout << "라고 답변하였지." << endl;
            block -= 4;
        }
        cout << "라고 답변하였지.";
        return 0;
    }
    space(block);
    cout << "\"재귀함수가 뭔가요?\"" << endl;
    space(block);
    cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << endl;
    space(block);
    cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << endl;
    space(block);
    cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << endl;
    return wornl(N - 1, block + 4);
}

int main()
{
    int N;
    cin >> N;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl;
    wornl(N, 0);
}