#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 > num2)
        return 1;
    if (num2 > num1)
        return -1;
    else
        return 0;
}

int binsearch(int data[], int n, int key)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == data[mid])
            return mid;
        else if (key > data[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int N;
    int AN[100000] = {};

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &AN[i]);
    qsort(AN, N, sizeof(int), compare);

    int M;
    int AM[100000] = {};

    scanf("%d", &M);
    for (int i = 0; i < M; i++)
        scanf("%d", &AM[i]);

    for (int i = 0; i < M; i++)
        printf(binsearch(AN, N, AM[i]) == -1 ? "0\n" : "1\n");
}