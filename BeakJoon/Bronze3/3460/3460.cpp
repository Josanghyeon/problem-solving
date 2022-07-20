#include <stdio.h>
int main()
{
    int T, n;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        for (int j = 0;; j++)
        {
            if (n < 2)
            {
                if (n == 1)
                {
                    printf("%d\n", j);
                    break;
                }
            }
            if (n % 2 == 1)
                printf("%d ", j);
            n = n / 2;
        }
    }
}