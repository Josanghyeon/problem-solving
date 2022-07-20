#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 1, temp, answer = 0;
    int search = true;

    int v[20001] = {};
    while (n < 9994)
    {
        temp = n;
        answer = 0;
        if (!v[n])
            cout << n << endl;

        while (search && temp > 0)
        {
            answer += temp % 10;
            temp = temp / 10;
        }

        if (answer < 10000 && answer != 0)
            v[answer + n] = 1;
        else
            search = false;
        n++;
    }
    return 0;
}