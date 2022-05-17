#include <stdio.h>

int main()
{
    int T, N, M;
    int importance;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int Queue[1000] = {};
        int locationQueue[1000] = {};
        int front = -1, rear = -1;
        int answer = 0;
        scanf("%d%d", &N, &M);
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &importance);
            locationQueue[++rear] = j;
            Queue[rear] = importance;
        }
        while (1)
        {
            bool P = true;
            front++;
            for (int j = front + 1; j <= rear; j++)
            {
                if (Queue[front] < Queue[j]) //뒤로 보내기
                {
                    P = false;
                    break;
                }
            }

            if (P)
            {
                answer++;
                if (locationQueue[front] == M)
                    break;
            }
            else
            {
                Queue[++rear] = Queue[front];
                locationQueue[rear] = locationQueue[front];
            }
        }
        printf("%d\n", answer);
    }
}