#include <stdio.h>

int main()
{
    int N;
    int T;
    int min = 1000000, max = -1000000;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &T);
        if (T < min)
            min = T;
        if (T > max)
            max = T;
    }
    printf("%d %d", min, max);
}