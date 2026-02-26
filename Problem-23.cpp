#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string guest, host, pile;
    cin >> guest >> host >> pile;
    vector<char> v1, v2;
    for (char c : guest)
        v1.push_back(c);
    for (char c : host)
        v1.push_back(c);
    for (char c : pile)
        v2.push_back(c);
    if (v1.size() != v2.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if (v1 == v2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}