#include <iostream>

using namespace std;

int main()
{
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int x, y;
    cin >> x >> y;

    for (int i = 0; i < x - 1; i++)
        y += month[i];

    cout << day[y % 7];
}