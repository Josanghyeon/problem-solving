#include <stdio.h>

int main()
{
    int N;
    long long int arr[100] = {};
    scanf("%d", &N);
    arr[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("%lld", arr[N]);
}