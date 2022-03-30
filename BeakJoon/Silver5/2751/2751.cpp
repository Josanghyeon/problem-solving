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
    return 0;
}

int main()
{
    int N;
    int list[1000000] = {};
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%d", &list[i]);

    qsort(list, N, sizeof(int), compare);

    for (int i = 0; i < N; i++)
        printf("%d\n", list[i]);
}