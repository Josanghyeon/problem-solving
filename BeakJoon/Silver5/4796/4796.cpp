#include <stdio.h>

int main()
{
    int L, P, V;

    for (int i = 1;; i++)
    {
        int Max = 0;
        scanf("%d%d%d", &L, &P, &V);
        if (L == 0 && P == 0 && V == 0)
            break;
        while (V != 0)
        {
            if (V < P)
            {
                if (L < V)
                    Max += L;
                else
                    Max += V;
                break;
            }
            V -= P;
            Max += L;
        }
        printf("Case %d: %d\n", i, Max);
    }
}