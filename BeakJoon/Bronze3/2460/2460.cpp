#include <iostream>

using namespace std;

int main()
{
    int in, out, i, max = 0, bus = 0;
    for (i = 0; i < 10; i++)
    {
        cin >> out >> in;
        bus += in;
        bus -= out;
        if (max < bus)
            max = bus;
    }
    cout << max;
}