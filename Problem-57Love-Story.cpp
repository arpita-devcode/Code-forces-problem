// https://codeforces.com/contest/1829/problem/A
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string target = "codeforces";
    for (int i = 0; i < n; i++)
    {
        int count =0;
        string s;
        cin >> s;
        for (int j = 0; j < 10; j++)
        {
            if (s[j] != target[j])
            {
                count++;
            }
            
        }
        cout << count  <<endl;
    }

    return 0;
}