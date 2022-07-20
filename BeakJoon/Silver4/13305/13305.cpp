#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, i, min;
    long long int sum = 0, price;
    cin >> N;

    vector<long long int> length;
    for (i = 0; i < N - 1; i++)
    {
        cin >> price;
        length.push_back(price);
    }

    cin >> price;
    min = price;
    sum += min * length[0];
    for (i = 1; i < N - 1; i++)
    {
        cin >> price;
        if (min > price)
            min = price;
        sum += min * length[i];
    }
    cin >> price;
    cout << sum;
}