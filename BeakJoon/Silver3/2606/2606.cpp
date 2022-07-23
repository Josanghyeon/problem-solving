#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int birus, i, x, y;

    cin >> x;
    vector<vector<int>> v(x);
    int cnt = 0;
    queue<int> q;
    vector<bool> check(100);

    cin >> birus;
    for (i = 0; i < birus; i++)
    {
        cin >> x >> y;
        v[x - 1].push_back(y - 1);
        v[y - 1].push_back(x - 1);
    }`

    check[0] = true;
    for (i = 0; i < v[0].size(); i++)
        q.push(v[0][i]);

    while (q.size() > 0)
    {
        int a = q.front();
        q.pop();
        if (!check[a])
        {
            check[a] = true;
            cnt++;
            for (i = 0; i < v[a].size(); i++)
                q.push(v[a][i]);
        }
    }
    cout << cnt;
}