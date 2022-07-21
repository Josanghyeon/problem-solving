#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N, i, j;
    int cnt = 0;
    cin >> N;

    for (i = 0; i < N; i++)
    {
        string word;
        bool check = true;
        cin >> word;

        bool checkArr[30] = {};
        checkArr[(int)word[0] - 97] = true;

        for (j = 1; j < word.length(); j++)
        {
            int ASCII = (int)word[j] - 97;
            int prevASCII = (int)word[j - 1] - 97;

            if (ASCII != prevASCII && checkArr[ASCII])
                check = false;
            checkArr[ASCII] = true;
        }

        if (check)
            cnt++;
    }
    cout << cnt;
}