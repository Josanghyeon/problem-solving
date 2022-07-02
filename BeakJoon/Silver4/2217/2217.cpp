#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, i, max, k;
    cin >> N;

    vector<int> rope;
    for (i = 0; i < N; i++)
    {
        cin >> k;
        rope.push_back(k);
    }

    sort(rope.begin(), rope.end(), greater<int>());

    max = rope[0];
    for (i = 1; i < N; i++)
    {
        while (max / (i + 1) < rope[i])
            max++;
    }

    cout << max;
}