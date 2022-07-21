#include <iostream>

using namespace std;

int main()
{
    int N, i;
    int pactorial = 1;
    cin >> N;

    for (i = 1; i <= N; i++)
        pactorial *= i;
    cout << pactorial;
}