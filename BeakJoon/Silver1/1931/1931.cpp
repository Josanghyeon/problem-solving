#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(vector<int> &v1, vector<int> &v2)
{
    if (v1[1] == v2[1])
        return v1[0] < v2[0];
    else
        return v1[1] < v2[1];
}

int main()
{
    int n, i;

    cin >> n;

    vector<vector<int>> time(n, vector<int>(2, 0));

    for (i = 0; i < n; i++)
        cin >> time[i][0] >> time[i][1];

    sort(time.begin(), time.end(), cmp);

    int cnt = 0;
    vector<vector<int>> greedy(n, vector<int>(2, 0));
    greedy[cnt][0] = time[0][0];
    greedy[cnt][1] = time[0][1];

    for (i = 1; i < n; i++)
    {
        if (greedy[cnt][0] <= time[i][0] && greedy[cnt][1] <= time[i][0])
        {
            cnt++;
            greedy[cnt][0] = time[i][0];
            greedy[cnt][1] = time[i][1];
        }
    }

    cout << cnt + 1;

    return 0;
}
