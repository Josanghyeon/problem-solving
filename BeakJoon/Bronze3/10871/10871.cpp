#include <stdio.h>

int main()
{
    int A, X;
    int Array[10001] = {};
    scanf("%d%d", &A, &X);

    for (int i = 0; i < A; i++)
    {
        scanf("%d", &Array[i]);
    }

    for (int i = 0; i < A; i++)
    {
        if (Array[i] < X)
            printf("%d ", Array[i]);
    }
}