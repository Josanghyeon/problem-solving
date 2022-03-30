#include <stdio.h>

int dp[1001][1001] = {
    0,
};

int bonomial(int N, int K)
{
    if (K > N)
        return 0;
    if (K == 0 || N == K)
        return 1;
    if (dp[N][K] == 0)
        dp[N][K] = (bonomial(N - 1, K - 1) + bonomial(N - 1, K)) % 10007;
    return dp[N][K];
}

int main()
{
    int N, K;
    scanf("%d%d", &N, &K);
    int a = bonomial(N, K);
    printf("%d", a);
}