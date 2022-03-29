#include <stdio.h>

int main()
{
    int A, B;
    int GCF = 1;
    scanf("%d%d", &A, &B);
    for (int i = 2; i <= (A > B ? A : B); i++)
    {
        if (A % i == 0 && B % i == 0)
            GCF = i;
    }
    printf("%d\n%d", GCF, A * B / GCF);
}