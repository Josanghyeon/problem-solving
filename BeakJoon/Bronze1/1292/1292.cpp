#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int A, B, i, j;
    vector<int> v;
    cin >> A >> B;

    for (i = 1; i < 1000; i++)
    {
        for (j = 0; j < i; j++)
            v.push_back(i);
    }

    int sum = 0;
    for (i = A; i <= B; i++)
        sum += v[i - 1];

    cout << sum;
}