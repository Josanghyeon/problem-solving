#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, i, x;
    cin >> N;

    vector<int> A;
    vector<int> B;

    for (i = 0; i < N; i++)
    {
        cin >> x;
        A.push_back(x);
    }

    for (i = 0; i < N; i++)
    {
        cin >> x;
        B.push_back(x);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    int sum = 0;
    for (i = 0; i < N; i++)
    {
        sum += A[i] * B[i];
    }

    cout << sum;
}