#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000001] = {};
    int blank = 1, i;
    scanf("%[^\n]s", word);
    for (i = 0; word[i]; i++)
    {
        if (word[i] == ' ')
        {
            blank++;
        }
    }
    if (word[0] == ' ')
        blank--;
    if (word[i - 1] == ' ')
        blank--;
    printf("%d", blank);
}