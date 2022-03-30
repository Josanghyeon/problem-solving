#include <stdio.h>

int main()
{
    int N;
    int number = 0;
    int Floor = 1;
    int sequence = 0;
    scanf("%d", &N);
    while (N > 1)
    {
        sequence += 6;
        N -= sequence;
        Floor++;
    }
    printf("%d", Floor);
}