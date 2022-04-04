#include <stdio.h>

int main()
{
    int K, top = -1, sum = 0;
    int Stack[100000] = {};
    int KN;

    scanf("%d", &K);
    for (int i = 0; i < K; i++)
    {
        scanf("%d", &KN);
        if (KN == 0)
            top--;
        else
            Stack[++top] = KN;
    }
    for (int i = 0; i <= top; i++)
        sum += Stack[i];
    printf("%d", sum);
}