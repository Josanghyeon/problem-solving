#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(char *a, char *b)
{
    int aLen = strlen(a);
    int bLen = strlen(b);

    if (aLen > bLen)
        return 1;
    if (bLen > aLen)
        return -1;
    return strcmp(a, b);
}

int main()
{
    char word[20000][51];
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%s", word[i]);
    qsort(word, N, sizeof(word[0]), (int (*)(const void *, const void *))compare);

    for (int i = 0; i < N; i++)
    {
        if (strcmp(word[i], word[i + 1]))
            printf("%s\n", word[i]);
    }
}