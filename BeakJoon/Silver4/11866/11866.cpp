#include <stdio.h>

int main()
{
    int N, K;
    int front = -1, rear = -1;
    int Queue[100] = {};

    scanf("%d%d", &N, &K);
    for (int i = 1; i <= N; i++)
        Queue[++rear] = i;

    for (int i = 0; i <= N; i++)
    {
        Queue[K - 1] = 
    }
}