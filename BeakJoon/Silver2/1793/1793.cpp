#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string BigNumAdd(string a, string b)
{
    int sum = 0;
    string result;
    while (!a.empty() || !b.empty() | sum)
    {
        if (!a.empty())
        {
            sum += a.back() - '0';
            a.pop_back();
        }
        if (!b.empty())
        {
            sum += b.back() - '0';
            b.pop_back();
        }
        result.push_back((sum % 10) + '0');
        sum /= 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    int i, n, start = 3;
    vector<string> dp(251);
    dp[0] = "1";
    dp[1] = "1";
    dp[2] = "3";

    for (i = 3; i <= 250; i++)
        dp[i] = BigNumAdd(BigNumAdd(dp[i - 2], dp[i - 1]), dp[i - 2]);

    while (cin >> n)
        cout << dp[n] << endl;
}