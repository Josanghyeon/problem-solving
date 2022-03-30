#include <stdio.h>

int main()
{
    int A, B, C;
    while (1)
    {
        scanf("%d%d%d", &A, &B, &C);
        if (A == 0 && B == 0 & C == 0)
            break;
        int AA = A * A;
        int BB = B * B;
        int CC = C * C;
        if (AA + BB == CC || CC + BB == AA || AA + CC == BB)
            printf("right\n");
        else
            printf("wrong\n");
    }
}