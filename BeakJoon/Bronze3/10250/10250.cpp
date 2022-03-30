#include <stdio.h>

int main()
{
    int T;
    int H, W, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d%d%d", &H, &W, &N);
        int ho = 0;
        int ho2 = 1;
        for (int j = 0; j < N; j++)
        {
            ho += 100;
            if ((ho - 100) / 100 == H)
            {
                ho2++;
                ho = 100;
            }
        }
        printf("%d\n", ho + ho2);
    }
}