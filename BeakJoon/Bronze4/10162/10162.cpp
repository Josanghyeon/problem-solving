#include <iostream>

using namespace std;

int main()
{
    int btn[4] = {10,
                  60,
                  300};
    int T, n = 2;
    cin >> T;
    while (n > -1)
    {
        btn[n + 1] = T / btn[n];
        T %= btn[n];
        n--;
    }

    if (T != 0)
        cout << -1;
    else
        cout << btn[3] << " " << btn[2] << " " << btn[1];
}