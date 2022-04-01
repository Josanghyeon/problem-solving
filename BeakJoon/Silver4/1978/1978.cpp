#include <stdio.h>

int main()
{
    int N, i, j;
    int Answer = 0;
    int Sosu[1000] = {};

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d", &Sosu[i]);

    for (i = 0; i < N; i++)
    {
        for (j = 2; j < Sosu[i]; j++)
        {
            if (Sosu[i] % j == 0)
                break;
        }
        if (j == Sosu[i])
            Answer++;
    }

    printf("%d", Answer);
}