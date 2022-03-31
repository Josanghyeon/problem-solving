#include <stdio.h>

struct PersonInfo
{
    int X[50] = {};
    int Y[50] = {};
    int score[50] = {};
} Info;

int main()
{
    int N, i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d%d", &Info.X[i], &Info.Y[i]);
        
    for (i = 0; i < N; i++)
    {
        int lose = 1;
        for (j = N - 1; j > -1; j--)
        {
            if (Info.X[j] > Info.X[i] && Info.Y[j] > Info.Y[i])
                lose++;
        }
        Info.score[i] = lose;
    }

    for (i = 0; i < N; i++)
        printf("%d ", Info.score[i]);
}