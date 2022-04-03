#include <stdio.h>
#include <stdlib.h>

int compare(void const *a, void const *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if (num1 > num2)
        return 1;
    if (num2 > num1)
        return -1;
    return 0;
}

int UpperBound(int data[], int N, int key)
{
    int mid;
    int start = 0, end = N - 1;

    while (start < end)
    {
        mid = (start + end) / 2;
        if (key < data[mid])
            end = mid;
        else
            start = mid + 1;
    }

    if (data[end] == key)
        return end + 1;

    return end;
}

int LowerBound(int data[], int N, int key)
{
    int mid;
    int start = 0, end = N - 1;

    while (start < end)
    {
        mid = (start + end) / 2;
        if (key <= data[mid])
            end = mid;
        else
            start = mid + 1;
    }
    return end;
}

int main()
{
    int N, M;
    int AN[50000] = {}, AM[50000] = {};
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &AN[i]);
    qsort(AN, N, sizeof(int), compare);
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
        scanf("%d", &AM[i]);
    for (int i = 0; i < M; i++)
        printf("%d ", UpperBound(AN, N, AM[i]) - LowerBound(AN, N, AM[i]));
}