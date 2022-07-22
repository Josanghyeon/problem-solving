#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int sum = 0;
    string n;
    cin >> n;
    bool a = true;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '0')
            a = false;
        sum += (int)n[i];
    }

    if (sum % 3 != 0 || a)
        cout << -1;

    else
    {
        sort(n.begin(), n.end(), greater<>());
        cout << n;
    }
}