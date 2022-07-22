#include <iostream>

using namespace std;

int main()
{
    string s;
    int i;
    cin >> s;

    int oneToZero = 0;
    bool combo = true;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            combo = true;
        else
        {
            if (combo)
                oneToZero++;
            combo = false;
        }
    }

    int zeroToOne = 0;
    combo = true;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            combo = true;
        else
        {
            if (combo)
                zeroToOne++;
            combo = false;
        }
    }

    cout << (oneToZero > zeroToOne ? zeroToOne : oneToZero);
}