#include <stdio.h>

int dp[100] = {};

int fibo(int N)
{
    if (N < 1)
        return 0;
    else if (N < 3)
        return 1;
    if (dp[N] == 0)
        dp[N] = fibo(N - 1) + fibo(N - 2);
    return dp[N];
}

int main()
{
    int N;
    scanf("%d", &N);
    int a = fibo(N);
    printf("%d", a);
}