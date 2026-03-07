///https://codeforces.com/problemset/problem/266/A
#include <iostream>
using namespace std;

int main()
{
    string colour;
    int n, count = 0;
    cin >> n;
    cin >> colour;

    for (int j = 0; j < colour.length(); j++)
    {
        if (colour[j] == colour[j + 1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}