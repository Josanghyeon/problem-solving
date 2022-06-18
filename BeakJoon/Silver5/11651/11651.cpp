#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} dot;

int compare(const void *f, const void *s)
{
    dot *a = (dot *)f;
    dot *b = (dot *)s;
    if (a->y > b->y)
        return 1;
    else if (a->y < b->y)
        return -1;
    else if (a->x > b->x)
        return 1;
    return -1;
}

int main()
{
    int n;
    dot *list;

    scanf("%d", &n);
    list = (dot *)malloc(n * sizeof(dot));

    for (int i = 0; i < n; i++)
        scanf("%d%d", &list[i].x, &list[i].y);

    qsort(list, n, sizeof(list[0]), compare);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", list[i].x, list[i].y);
}