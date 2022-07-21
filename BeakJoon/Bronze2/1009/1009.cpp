#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T, A, B, i, j;
    cin >> T;
    for (i = 0; i < T; i++)
    {
        int p = 1;
        cin >> A >> B;
        for (j = 0; j < B; j++)
            p = p * A % 10;
        if (p == 0)
            cout << 10 << endl;
        else
            cout << p << endl;
    }
}