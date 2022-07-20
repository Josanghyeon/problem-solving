#include <iostream>

using namespace std;

int main()
{
    int i, n, k, cnt = 0;
    cin >> n >> k;
    for (i = 1; i <= n; i++)
    {
        if (!(n % i))
        {
            cnt++;
            if (cnt >= k)
            {
                cout << i;
                break;
            }
        }
        if (i == n)
            cout << 0;
    }
}