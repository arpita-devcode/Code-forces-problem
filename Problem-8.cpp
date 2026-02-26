//https://codeforces.com/problemset/problem/263/A
#include <iostream>
using namespace std;

int main()
{

    int v, n = 5;

    for (int i = 0; n > i; i++)
    {
        for (int j = 0; n > j; j++)
        {
            cin >> v;
            if (v == 1)
            {
                cout << abs(2 - i) + abs(2 - j);
            }
        }
    }
    return 0;
}