#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string n, str = "";
    int i, num, sum = 0;
    bool isMinus = false;
    
    cin >> n;

    int NLength = n.length();

    for (i = 0; i <= NLength; i++)
    {
        if (n[i] == '+' | n[i] == '-' || i == NLength)
        {
            num = stoi(str);
            if (isMinus)
                sum -= num;
            else
                sum += num;
            if (n[i] == '-')
                isMinus = true;
            str = "";
        }
        else
            str += n[i];
    }
    cout << sum;
}