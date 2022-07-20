#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int M, N, i, j;
    cin >> M >> N;

    int sum = 0;
    int min = 100000;

    vector<bool> PrimeArray;

    for (i = 0; i <= N; i++)
        PrimeArray.push_back(true);

    for (i = 2; i <= N; i++)
    {
        if (PrimeArray[i])
        {
            for (j = i * i; j <= N; j += i)
                PrimeArray[j] = false;

            if (i >= M)
            {
                if (min > i)
                    min = i;
                sum += i;
            }
        }
    }

    if (sum == 0)
        cout << -1;
    else
    {
        cout << sum << endl;
        cout << min << endl;
    }
}