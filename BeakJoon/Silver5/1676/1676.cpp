#include <stdio.h>

int main()
{
    int N, i, result = 0;
    scanf("%d", &N);
    for (i = 5; i <= N; i += 5)
    {
        int A = i;
        while (A % 5 == 0)
        {
            A /= 5;
            result++;
        }
    }
    printf("%d", result);
}