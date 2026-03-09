// https://codeforces.com/contest/1692/problem/A
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c, d;
    
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        cin >> a >> b >> c >> d;
        if (a < b)
        {
            count++;
        }
        if (a < c)
        {
            count++;
        }
        if (a < d)
        {
            count++;
        }
        cout << count <<endl;
    }

    return 0;
}