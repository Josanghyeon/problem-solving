#include <stdio.h>

int main()
{
    int N;
    int Queue[1001] = {};
    int front = -1, back = -1;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
        Queue[++back] = i;

    while (front != back)
    {
        printf("%d ", Queue[++front]);
        Queue[++back] = Queue[++front];
    }
}