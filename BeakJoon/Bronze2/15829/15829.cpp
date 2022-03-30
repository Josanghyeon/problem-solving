#include <stdio.h>

int main()
{
    int len, M = 1234567891;
    long long hash_value = 0, R = 1;
    char str[51];

    scanf("%d %s", &len, str);

    for (int i = 0; i < len; i++)
    {
        hash_value = (hash_value + (str[i] - 96) * R) % M;
        R = (R * 31) % M;
    }
    printf("%lld\n", hash_value);
}