#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;
    for (i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }

    cout << dp[n];
}