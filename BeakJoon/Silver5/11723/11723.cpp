#include <stdio.h>
#include <string.h>

int main()
{
    int n, commandNumber;
    int set[21] = {
        0,
    };
    char command[7] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", command);
        if (!strcmp(command, "add"))
        {
            scanf("%d", &commandNumber);
            set[commandNumber] = 1;
        }
        else if (!strcmp(command, "remove"))
        {
            scanf("%d", &commandNumber);
            set[commandNumber] = 0;
        }
        else if (!strcmp(command, "toggle"))
        {
            scanf("%d", &commandNumber);
            set[commandNumber] = !set[commandNumber];
        }
        else if (!strcmp(command, "all"))
        {
            for (int j = 1; j <= 20; j++)
                set[j] = 1;
        }
        else if (!strcmp(command, "empty"))
        {
            for (int j = 1; j <= 20; j++)
                set[j] = 0;
        }
        else
        {
            scanf("%d", &commandNumber);
            printf("%d\n", set[commandNumber]);
        }
    }
}