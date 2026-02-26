//https://codeforces.com/problemset/problem/116/A
#include <iostream>
using namespace std;

int main()
{

    int n, current = 0, capacity = 0;
    cin >> n;
    for (int i = 0; n > i; i++)
    {
        int m, p;
        cin >> m >> p;
        current = current - m + p;
        if (capacity < current)
        {
            capacity = current;
        }
    }
    cout << capacity;

    return 0;
}