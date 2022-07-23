#include <stdio.h>

int main()
{
    int n, m, i, x, y;
    scanf("%d%d", &n, &m);
    int sequence[100001] = {};

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        sequence[i] = x + sequence[i - 1];
    }

    for (i = 0; i < m; i++)
    {
        scanf("%d%d", &x, &y);
        printf("%d\n", sequence[y] - sequence[x - 1]);
    }
}