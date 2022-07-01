#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T, i;
    cin >> T;

    string AB = "";
    for (i = 0; i < T; i++)
    {
        cin >> AB;
        int A = stoi(AB.substr(0, 1));
        int B = stoi(AB.substr(2, 3));
        cout << A + B << endl;
    }
}