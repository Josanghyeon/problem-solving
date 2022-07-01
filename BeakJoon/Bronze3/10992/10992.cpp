#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
            cout << " ";

        for (int j = 0; j < i * 2 + 1; j++)
        {
            if (j == 0 || j == i * 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < N * 2 - 1; j++)
        cout << "*";
}