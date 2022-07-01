#include <iostream>

using namespace std;

int main()
{
    int T, i, A, B;
    cin >> T;

    for (i = 1; i <= T; i++)
    {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << endl;
    }
}