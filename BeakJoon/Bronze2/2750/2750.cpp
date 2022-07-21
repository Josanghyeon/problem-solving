#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, i;

    cin >> N;
    vector<int> A(N);

    for (i = 0; i < N; i++)
        cin >> A[i];

    sort(A.begin(), A.end());

    for (i = 0; i < N; i++)
        cout << A[i] << endl;
}