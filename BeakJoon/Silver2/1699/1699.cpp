#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int i, j, N;
    cin >> N;
    vector<int> dp(N + 1);
    dp[1] = 1;
    for (i = 2; i <= N; i++)
    {
        int minn = 100001;
        for (j = 1; j * j <= i; j++)
            minn = min(minn, dp[i - j * j]);
        dp[i] = minn + 1;
    }
    cout << dp[N];
}