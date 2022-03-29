#include <stdio.h>

int main()
{
    int A, B, C;
    int Number[10] = {};
    scanf("%d%d%d", &A, &B, &C);
    int sum = A * B * C;
    while (sum > 0)
    {
        Number[sum % 10]++;
        sum /= 10;
    }
    for (int i = 0; i < 10; i++)
        printf("%d\n",Number[i]);
}