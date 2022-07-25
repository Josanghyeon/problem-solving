#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(int x, int card[], int N)
{
    int start = 0;
    int end = N - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (card[mid] < x)
            start = mid + 1;
        else if (card[mid] > x)
            end = mid - 1;
        else
            return 1;
    }
    return 0;
}

int main()
{
    int N, M, i, x;
    int card[500001] = {};

    cin >> N;
    for (i = 0; i < N; i++)
        cin >> card[i];

    sort(card, card + N);

    int result[500001] = {};
    cin >> M;

    for (i = 0; i < M; i++)
    {
        cin >> x;
        result[i] = binarySearch(x, card, N);
    }

    for (i = 0; i < M; i++)
        cout << result[i] << " ";
}