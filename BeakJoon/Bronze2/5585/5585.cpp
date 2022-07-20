#include <iostream>

using namespace std;

int main()
{
    int namuzi[6] = {1,
                     5,
                     10,
                     50,
                     100,
                     500};
    int JOI, cnt = 0, n = 5;
    cin >> JOI;
    JOI = 1000 - JOI;
    while (n > -1)
    {
        cnt += JOI / namuzi[n];
        JOI %= namuzi[n];
        n--;
    }
    cout << cnt;
}