#include <stdio.h>

int main()
{
    int n, Number[100001], sequence = 0;
    int top = -1, AnswerTop = -1;
    int Stack[100001] = {};
    char Answer[200001] = {};

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &Number[i]);

    for (int i = 0; i < n; i++)
    {
        if (Stack[top] > Number[i])
        {
            printf("NO");
            return 0;
        }
        else if (Stack[top] < Number[i])
        {
            while (Number[i] != sequence)
            {
                Stack[++top] = ++sequence;
                Answer[++AnswerTop] = '+';
            }
            top--;
            Answer[++AnswerTop] = '-';
        }
        else
        {
            do
            {
                Answer[++AnswerTop] = '-';
                top--;
            } while (Stack[top + 1] != Number[i]);
        }
    }

    for (int i = 0; Answer[i]; i++)
        printf("%c\n", Answer[i]);
}