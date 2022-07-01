#include <iostream>

using namespace std;

int main()
{
    int T;
    int A, B;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A + B << endl;
    }
}