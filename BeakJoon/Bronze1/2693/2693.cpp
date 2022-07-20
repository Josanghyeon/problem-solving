#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T, i, j, x;
    vector<int> A(10);
    cin >> T;
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < 10; j++)
        {
            cin >> A[j];
        }
        sort(A.begin(), A.end());
        cout << A[7] << endl;
    }
}