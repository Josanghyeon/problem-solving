#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, i, j;
    int v[100][100] = {};
    cin >> N;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cin >> v[i][j];
        }
    }
}