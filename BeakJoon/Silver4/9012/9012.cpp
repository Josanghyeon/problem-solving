#include <stdio.h>

int main()
{
    int T;
    char Stack[51] = {};
    char word[51] = {};
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int Top = -1;
        scanf("%s", word);
        for (int j = 0; word[j]; j++)
        {
            if (word[j] == '(')
            {
                Stack[++Top] = word[j];
            }
            else
            {
                if (Stack[Top] == '(')
                    Top--;
                else
                {
                    Top = -2;
                    break;
                }
            }
        }
        if (Top != -1)
            printf("NO\n");
        else
            printf("YES\n");
    }
}