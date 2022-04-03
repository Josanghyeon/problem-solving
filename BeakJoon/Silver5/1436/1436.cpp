#include <stdio.h>
#include <math.h>

int main()
{
    int N, idx = 0;
    int num = 665;

    scanf("%d", &N);

    while (1)
    {
        if (idx == N)
            break;

        num++;
        for (int i = 0; i < 10; i++)
        {
            if (num / (int)pow(10, i) % 1000 == 666)
            {
                idx++;
                break;
            }
        }
    }
    printf("%d\n", num);
}