#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, i;
    cin >> N;

    vector<int> dp(N + 1);
    for (i = 2; i <= N; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (!(i % 3))
            dp[i] = min(dp[i / 3] + 1, dp[i]);
        if (!(i % 2))
            dp[i] = min(dp[i / 2] + 1, dp[i]);
    }

    cout << dp[N];
}