#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int t, i, n;
    vector<long long int> dp;
    cin >> t;
    dp.push_back(1);
    dp.push_back(1);
    dp.push_back(1);
    dp.push_back(2);
    dp.push_back(2);

    for (i = 5; i <= 100; i++)
        dp.push_back(dp[i - 1] + dp[i - 5]);

    for (i = 0; i < t; i++)
    {
        cin >> n;
        cout << dp[n - 1] << endl;
    }
}