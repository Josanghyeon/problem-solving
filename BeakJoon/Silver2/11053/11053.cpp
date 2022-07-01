#include <iostream>
#include <algorithm>
#include <vector>

using namespace stdp;

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n);
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && dp[j] + 1 > dp[i])
            {
                dp[i] = dp[j] + 1;
            }
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << '\n';
    return 0;
}