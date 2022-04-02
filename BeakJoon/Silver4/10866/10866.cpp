#include <stdio.h>
#include <string.h>

int arr[5000] = {
    0,
};
int start = 2000;
int end = 2001;

void push_front()
{
    int value;
    scanf("%d", &value);
    arr[start--] = value;
}

void push_back()
{
    int value;
    scanf("%d", &value);
    arr[end++] = value;
}

int pop_front()
{
    if (arr[start + 1] == 0)
        return -1;
    else
    {
        int r = arr[start + 1];
        arr[++start] = 0;
        return r;
    }
}

int pop_back()
{
    if (arr[end - 1] == 0)
        return -1;
    else
    {
        int r = arr[end - 1];
        arr[--end] = 0;
        return r;
    }
}

int front()
{
    if (arr[start + 1] != 0)
        return arr[start + 1];
    else
        return -1;
}

int back()
{
    if (arr[end - 1] != 0)
        return arr[end - 1];
    else
        return -1;
}

int size()
{
    return end - start - 1;
}

int empty()
{
    if ((end - start - 1) == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int N;
    char input[100] = {
        0,
    };
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", &input);
        if (!strcmp(input, "push_front"))
            push_front();
        else if (!strcmp(input, "push_back"))
            push_back();
        else if (!strcmp(input, "pop_front"))
            printf("%d\n", pop_front());
        else if (!strcmp(input, "pop_back"))
            printf("%d\n", pop_back());
        else if (!strcmp(input, "size"))
            printf("%d\n", size());
        else if (!strcmp(input, "empty"))
            printf("%d\n", empty());
        else if (!strcmp(input, "front"))
            printf("%d\n", front());
        else
            printf("%d\n", back());
    }
}