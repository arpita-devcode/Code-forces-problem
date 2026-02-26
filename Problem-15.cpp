// https://codeforces.com/problemset/problem/1030/A
#include <iostream>
using namespace std;

int main()
{

    int n, easy = 0, hard = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (m == 0)
        {
            easy++;
        }
        else
        {
            hard++;
        }
    }
    if (hard > 1 || hard > 0)
    {
        cout << "HARD";
    }
    else
        cout << "EASY";
    return 0;
}