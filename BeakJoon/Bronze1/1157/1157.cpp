#include <stdio.h>

int main()
{
    char word[1000000] = {};
    int spelling[50] = {
        0,
    };
    int i;

    scanf("%s", word);

    for (i = 0; word[i]; i++)
    {
        if (word[i] < 97)
            spelling[word[i] - 65]++;
        else
            spelling[word[i] - 97]++;
    }

    int max = -1;
    int maxi;
    int same;

    for (i = 0; i < 50; i++)
    {
        if (max < spelling[i]) {
            max = spelling[i];
            maxi = i;
        }
        else if (max == spelling[i])
            same = spelling[i];
    }

    if (same == max)
        printf("?");
    else
        printf("%c", maxi + 65);
}