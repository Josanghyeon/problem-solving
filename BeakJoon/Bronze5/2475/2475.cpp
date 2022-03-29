#include <stdio.h>

int main()
{
    int number, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &number);
        sum += number * number;
    }
    printf("%d", sum % 10);
}