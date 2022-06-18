#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[102];
    int age;
    int id;
} user;

int compare(const void *f, const void *s)
{
    user *a = (user *)f;
    user *b = (user *)s;
    if (a->age > b->age)
        return 1;
    else if (b->age > a->age)
        return -1;
    else if (a->id > b->id)
        return 1;
    return -1;
}

int main()
{
    int N;
    user *User;
    scanf("%d", &N);

    User = (user *)malloc(N * sizeof(user));

    for (int i = 0; i < N; i++)
    {
        scanf("%d%s", &User[i].age, User[i].name);
        User[i].id = i;
    }

    qsort(User, N, sizeof(User[0]), compare);

    for (int i = 0; i < N; i++)
        printf("%d %s\n", User[i].age, User[i].name);
}