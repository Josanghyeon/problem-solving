#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A > B && A > C)
        cout << max(B, C);
    else if (B > A && B > C)
        cout << max(A, C);
    else
        cout << max(A, B);
}