#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    while (S.length() < T.length())
    {
        if (T[T.length() - 1] == 'A')
        {
            T.pop_back();
        }
        else
        {
            T.pop_back();
            reverse(T.begin(), T.end());
        }
    }

    cout << (S == T ? 1 : 0);
}