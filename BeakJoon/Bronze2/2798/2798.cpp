#include <stdio.h>

int main()
{
    int N, M;
    int Card[100000] = {};

    scanf("%d%d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Card[i]);
    }

    int max = -1;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int CardSum = Card[i] + Card[j] + Card[k];
                if (CardSum <= M && CardSum > max)
                    max = CardSum;
            }
        }
    }

    printf("%d", max);
}