#include <stdio.h>
#include <string.h>

int main()
{
    char num[6];
    int len = 0;

    while (1)
    {
        scanf("%s", num);

        if (num[0] == '0')
            break;

        else if (strlen(num) == 1)
            printf("yes\n");
        len = 0;

        while (num[len] != '\0')
        {
            len = strlen(num);

            for (int i = 0; i < len / 2; i++)
            {
                if (num[i] != num[len - 1 - i])
                {
                    printf("no\n");
                    break;
                }

                else
                {
                    if (num[i + 1] == num[len - i - 2])
                    {
                        printf("yes\n");
                        break;
                    }
                    printf("no\n");
                    break;
                }
            }
        }
    }
}