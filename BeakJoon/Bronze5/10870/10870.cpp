#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, n;
    vector<int> dp;
    cin >> n;
    dp.push_back(0);
    dp.push_back(1);
    for (i = 2; i <= n; i++)
    {
        dp.push_back(dp[i - 1] + dp[i - 2]);
    }
    cout << dp[n];
}