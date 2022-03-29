#include <stdio.h>
#include <string.h>

int main()
{
    int arr[26], i, j;
    char S[100];
    scanf("%s", S);
    for (i = 0; i < 26; i++)
        arr[i] = -1;
    for (i = 'a'; i <= 'z'; i++)
    {
        for (j = 0; j < strlen(S); j++)
        {
            if (i == S[j])
            {
                arr[S[j] - 'a'] = j;
                break;
            }
        }
    }
    for (i = 0; i < 26; i++)
    {
        printf("%d", arr[i]);
        if (i < 25)
            printf(" ");
    }
}
