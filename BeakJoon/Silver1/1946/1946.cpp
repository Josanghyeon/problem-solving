#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int compare(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first < p2.first)
        return 1;
    else
        return 0;
}

int main()
{
    int tc;
    int n;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int solution = 1;
        cin >> n;
        vector<pair<int, int>> v(n);

        for (int j = 0; j < n; j++)
            cin >> v[j].first >> v[j].second;

        sort(v.begin(), v.end(), compare);

        int second = v[0].second;
        for (int j = 0; j < n; j++)
        {
            if (second > v[j].second)
            {
                solution++;
                second = v[j].second;
            }
        }

        cout << solution << "\n";
    }
    return 0;
}