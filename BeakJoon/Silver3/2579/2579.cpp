#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int stairCnt, i;

    cin >> stairCnt;

    vector<int> stairPoint(stairCnt + 1);
    vector<int> DP(stairCnt + 1);

    for (int i = 1; i <= stairCnt; i++)
        cin >> stairPoint[i];

    //맨처음꺼를 건너뛰어야 하는 경우는...?
    DP[1] = stairPoint[1];
    DP[2] = stairPoint[1] + stairPoint[2];
    for (i = 3; i <= stairCnt; i++)
    {
        DP[i] = max(DP[i - 3] + stairPoint[i - 1] + stairPoint[i], DP[i - 2] + stairPoint[i]);
    }

    cout << DP[stairCnt];

    return 0;
}