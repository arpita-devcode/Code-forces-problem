// https://codeforces.com/problemset/problem/599/A
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int ans = min({d1 + d2 + d3, 2 * d1 + 2 * d2, 2 * d1 + 2 * d3, 2 * d2 + 2 * d3});
    cout << ans;
    return 0;
}