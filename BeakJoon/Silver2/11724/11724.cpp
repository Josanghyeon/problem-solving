#include <iostream>
#include <queue>

using namespace std;

int map[1010][1010];
int V, E;

queue<int> q;
int visited[1010];

void BFS(int start)
{
    visited[start] = 1;
    q.push(start);

    while (!q.empty())
    {
        start = q.front();
        q.pop();

        for (int i = 1; i <= V; i++)
        {
            if (map[start][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int main(void)
{
    cin >> V >> E;

    for (int i = 1; i <= E; i++)
    {
        int a, b;
        cin >> a >> b;

        map[a][b] = 1;
        map[b][a] = 1;
    }

    int cnt = 0;
    for (int i = 1; i <= V; i++)
    {
        if (visited[i] == 0)
        {
            BFS(i);
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
