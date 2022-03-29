#include <stdio.h>
#include <string.h>

int main()
{
    int T, limit;
    char word[10] = {};
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d%s", &limit, word);
        for (int j = 0; j < strlen(word); j++)
        {
            for (int k = 0; k < limit; k++)
            {
                printf("%c", word[j]);
            }
        }
        printf("\n");
    }
}