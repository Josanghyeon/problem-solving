#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, i;
    cin >> N;

    vector<int> dp(N + 1);
    dp[1] = 0;
    dp[2] = 3;
    for (i = 3; i < N; i+=2)
    {

    }
    cout << dp[N];
}