#include <stdio.h>

int main()
{
    int N, M, Tree[1000001] = {}, max = -1;
    scanf("%d%d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Tree[i]);
        if (max < Tree[i])
            max = Tree[i];
    }

    int start = 0;
    int end = max;

    while (start + 1 < end)
    {
        int mid = (start + end) / 2;
        long long int sum = 0;

        for (int i = 0; i < N; i++)
        {
            if (Tree[i] >= mid)
                sum += Tree[i] - mid;
        }
        if (sum >= M)
            start = mid;
        else
            end = mid;
    }

    printf("%d", start);
}