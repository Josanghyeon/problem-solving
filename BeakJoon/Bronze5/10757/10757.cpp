#include <iostream>
#include <algorithm>

using namespace std;

string bigNumberAdd(string a, string b)
{
    int carry = 0;
    string result = "";

    while (!a.empty() || !b.empty() || carry)
    {
        if (!a.empty())
        {
            carry += a.back() - '0';
            a.pop_back();
        }

        if (!b.empty())
        {
            carry += b.back() - '0';
            b.pop_back();
        }

        result += carry % 10 + '0';
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string a, b, i, j;
    cin >> a >> b;
    cout << bigNumberAdd(a, b);
}