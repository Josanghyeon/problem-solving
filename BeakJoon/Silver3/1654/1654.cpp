#include <stdio.h>

int main()
{
    int K, N;
    int arr[10001] = {};
    int max = 0;

    scanf("%d%d", &K, &N);
    for (int i = 0; i < K; i++)
    {
        scanf("%d", &arr[i]);
        if (max < arr[i])
            max = arr[i];
    }

    long long int start = 1, end = max, lan = 0;
    while (start <= end)
    {
        long long int mid = (start + end) / 2;
        int Count = 0;
        for (int i = 0; i < K; i++)
            Count += arr[i] / mid;
        if (N <= Count && mid > lan)
            lan = mid;
        if (N > Count)
            end = mid - 1;
        else
            start = mid + 1;
    }
    printf("%lld", lan);
}