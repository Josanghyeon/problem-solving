#include <string>

int main()
{
    int a[1000000];
    int M, N;
    scanf("%d%d", &M, &N);
    for (int i = 2; i <= N; i++)
        a[i] = i;

    for (int i = 2; i <= N; i++)
    {
        if (a[i] == 0)
            continue;

        for (int j = 2 * i; j <= N; j += i)
            a[j] = 0;
    }

    for (int i = M; i <= N; i++)
    {
        if (a[i] != 0)
            printf("%d\n", a[i]);
    }
}
