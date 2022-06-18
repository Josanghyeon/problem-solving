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
    int P[100] = {};

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &P[i]);
    qsort(P, N, sizeof(int), compare);

    int delay = 0;
    int now = 0;
    for (int i = 0; i < N; i++)
    {
        delay += now + P[i];
        now += P[i];
    }

    printf("%d", delay);
}