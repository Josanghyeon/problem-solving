#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    vector<int> dp(n + 1);

    dp[1] = 1;
    for (i = 2; i <= n; i++)
    {
        int minn = 100000;
        for (j = 1; j * j <= i; j++)
            minn = min(minn, dp[i - j * j]);
        dp[i] = minn + 1;
    }
    cout << dp[n];
}