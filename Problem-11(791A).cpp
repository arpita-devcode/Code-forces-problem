//https://codeforces.com/problemset/problem/791/A
#include <iostream>
using namespace std;

int main()
{

    int n, m, _limake, _bob, year = 0;
    cin >> n >> m;
    _limake = n * 3;
    _bob = m * 2;
    year++;
    while (_limake < _bob || _limake == _bob)
    {
        /* code */
        _limake = _limake * 3;
        _bob = _bob * 2;
        year++;
    }

    cout << year;

    return 0;
}