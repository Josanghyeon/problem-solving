#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, M, K, x, y, i, j;
    queue<pair<int, int>> q;
    cin >> T;

    for (i = 0; i < T; i++)
    {
        int bug = 0, dirt[51][51] = {}, visted[51][51] = {};
        cin >> M >> N >> K;

        //배추 입력받기
        for (j = 0; j < K; j++)
        {
            cin >> x >> y;
            dirt[x + 1][y + 1] = 1;
        }

        for (x = 1; x <= M; x++)
        {
            for (y = 1; y <= N; y++)
            {
                //배추발견!!
                if (dirt[x][y] == 1)
                {
                    //주변에 있는 배추 다 먹어버리기
                    q.push(make_pair(x, y));
                    dirt[x][y] = 0;
                    while (q.size() > 0)
                    {
                        int a = q.front().first;
                        int b = q.front().second;
                        q.pop();
                        dirt[a][b] = 0;
                        if (dirt[a][b + 1] && !(visted[a][b + 1]))
                        {
                            q.push(make_pair(a, b + 1));
                            visted[a][b + 1] = 1;
                        }
                        if (dirt[a][b - 1] && !(visted[a][b - 1]))
                        {
                            q.push(make_pair(a, b - 1));
                            visted[a][b - 1] = 1;
                        }
                        if (dirt[a + 1][b] && !(visted[a + 1][b]))
                        {
                            q.push(make_pair(a + 1, b));
                            visted[a + 1][b] = 1;
                        }
                        if (dirt[a - 1][b] && !(visted[a - 1][b]))
                        {
                            q.push(make_pair(a - 1, b));
                            visted[a - 1][b] = 1;
                        }
                    }
                    bug++;
                }
            }
        }
        cout << bug << endl;
    }
}