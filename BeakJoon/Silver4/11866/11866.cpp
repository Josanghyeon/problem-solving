#include <stdio.h>

int main()
{
    int N, K;
    int front = -1, rear = -1;
    int Queue[100] = {};

    scanf("%d%d", &N, &K);
    for (int i = 1; i <= N; i++)
        Queue[++rear] = i;

    int Delete = K - 1;
    printf("<");
    for (int i = 0; i < N; i++)
    {
        front = Delete % N;
        if (i == N - 1)
        {
            printf("%d>", Queue[front]);
            Queue[front] = 0;
        }
        else
        {
            printf("%d, ", Queue[front]);
            Queue[front] = 0;
            int temp = 0;
            while (temp < K)
            {
                Delete++;
                front = Delete % N;
                if (Queue[front] != 0)
                    temp++;
            }
        }
    }
}