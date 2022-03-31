#include <stdio.h>
#include <string.h>

void push(int Queue[], int *rear)
{
    int vaule;
    scanf("%d", &vaule);
    Queue[++*rear] = vaule;
}

void pop(int Queue[], int *front, int rear)
{
    if (rear == *front)
        printf("-1\n");
    else
        printf("%d\n", Queue[++*front]);
}

int main()
{
    int N;
    int Queue[10000] = {};
    int rear = -1, front = -1;
    char command[6] = {};
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", command);
        if (!strcmp(command, "push"))
            push(Queue, &rear);
        else if (!strcmp(command, "pop"))
            pop(Queue, &front, rear);
        else if (!strcmp(command, "front"))
            printf(rear == front ? "-1\n" : "%d\n", Queue[front + 1]);
        else if (!strcmp(command, "back"))
            printf(rear == front ? "-1\n" : "%d\n", Queue[rear]);
        else if (!strcmp(command, "size"))
            printf("%d\n", rear - front);
        else
            printf(rear == front ? "1\n" : "0\n");
    }
}