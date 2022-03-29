#include <stdio.h>

int main()
{
    int T, k, n;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d%d", &k, &n);
        int Floor[10000][15] = {0};

        for (int j = 0; j < n; j++)
            Floor[0][j] = j + 1;

        for (int j = 1; j <= k; j++)
        {
            Floor[j][0] = 1;
            for (int l = 0; l <= n; l++)
            {
                Floor[j][l + 1] = Floor[j - 1][l + 1] + Floor[j][l];
            }
        }
        printf("%d\n", Floor[k][n - 1]);
    }
}