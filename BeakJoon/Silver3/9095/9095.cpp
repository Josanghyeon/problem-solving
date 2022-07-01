#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int T, n, i, j;

    cin >> T;
    for (i = 0; i < T; i++)
    {
        cin >> n;
        vector<int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 4;
        for (j = 3; j <= n; j++)
        {
            dp[j] = dp[j - 3] + dp[j - 2] + dp[j - 1];
        }
        cout << dp[n - 1] << endl;
    }
}