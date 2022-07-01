#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    while (str.length() > 9)
    {
        cout << str.substr(0, 10) << endl;
        str = str.substr(10);
    }
    cout << str;
}