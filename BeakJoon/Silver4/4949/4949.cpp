#include <stdio.h>

int main()
{
    char Stack[100] = {};
    char Sentence[100] = {};
    while (1)
    {
        int Top = -1;
        bool String = true;
        scanf("%[^\n]s", Sentence);
        fgetc(stdin);

        if (Sentence[0] == '.' && Sentence[1] == '\0')
            break;

        for (int i = 0; Sentence[i]; i++)
        {
            if (Sentence[i] == '[' || Sentence[i] == '(')
            {
                String = false;
                Stack[++Top] = Sentence[i];
            }
            else if (Sentence[i] == ']')
            {
                String = false;
                if (Stack[Top] == '[')
                    Top--;
                else
                {
                    Top = -2;
                    break;
                }
            }
            else if (Sentence[i] == ')')
            {
                String = false;
                if (Stack[Top] == '(')
                    Top--;
                else
                {
                    Top = -2;
                    break;
                }
            }
        }
        if (Top != -1 && String == false)
            printf("no\n");
        else
            printf("yes\n");
    }
}