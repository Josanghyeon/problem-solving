#include <iostream>

using namespace std;

int main()
{
    int i;
    long long int S, sum = 0;
    cin >> S;

    for (i = 1; sum <= S; i++)
        sum += i;

    cout << i - 2;
}