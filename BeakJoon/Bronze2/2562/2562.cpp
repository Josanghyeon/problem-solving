#include <stdio.h>

int main()
{
    int max = -1, maxi, n;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &n);
        if (max < n)
        {
            max = n;
            maxi = i;
        }
    }
    printf("%d\n%d", max, maxi + 1);
}