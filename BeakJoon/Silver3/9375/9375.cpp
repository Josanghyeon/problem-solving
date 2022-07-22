#include <iostream>
#include <map>

using namespace std;

int main()
{
    int i, j, T, n;
    string name, type;
    cin >> T;
    for (i = 0; i < T; i++)
    {
        cin >> n;
        map<string, int> m;
        for (j = 0; j < n; j++)
        {
            cin >> name >> type;
            if (m.find(type) == m.end())
                m.insert({type, 1});
            else
                m[type]++;
        }
        int sum = 1;
        for (auto iter = m.begin(); iter != m.end(); iter++)
            sum *= iter->second + 1;
        cout << sum - 1 << endl;
    }
}