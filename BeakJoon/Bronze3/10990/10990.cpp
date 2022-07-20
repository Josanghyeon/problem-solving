#include <iostream>

using namespace std;

int main()
{
    int N, i, j;
    cin >> N;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - i - 1; j++)
            cout << " ";
        cout << "*";

        for (j = 0; j < i * 2 - 1; j++)
            cout << " ";

        if (i != 0)
            cout << "*";

        cout << endl;
    }
}