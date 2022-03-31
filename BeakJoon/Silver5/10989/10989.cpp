#include <stdio.h>

int main()
{
    int N;
    int temp;
    int list[10001] = {
        0,
    };
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        list[temp]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (list[i] != 0)
        {
            for (int j = list[i]; j > 0; j--)
                printf("%d\n", i);
        }
    }
}