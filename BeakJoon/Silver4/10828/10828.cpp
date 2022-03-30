#include <stdio.h>
#include <string.h>

int Stack[100001] = {}, Top = -1;

void push()
{
    int value;
    scanf("%d", &value);
    Stack[++Top] = value;
}

void pop()
{
    if (Top < 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", Stack[Top]);
        --Top;
    }
}

int main()
{
    int N;
    char command[6] = {};

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", command);

        if (!strcmp(command, "push"))
            push();
        else if (!strcmp(command, "top"))
            printf(Top < 0 ? "-1\n" : "%d\n", Stack[Top]);
        else if (!strcmp(command, "size"))
            printf("%d\n", Top + 1);
        else if (!strcmp(command, "empty"))
            printf(Top < 0 ? "1\n" : "0\n");
        else
            pop();
    }
}