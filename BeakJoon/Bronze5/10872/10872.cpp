#include <iostream>

using namespace std;

int Pactorial(int N)
{
    if (N <= 1)
        return 1;
    return N * Pactorial(N - 1);
}

int main()
{
    int N;
    cin >> N;
    cout << Pactorial(N);
}