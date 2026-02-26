//https://codeforces.com/contest/520/problem/A
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int n;
    string s1;
    cin >> n >> s1;
    int arr[26] = {false};
    int length = s1.length();
    for (int i = 0; i < length; i++)
    {
        char c = toupper(s1[i]);
        if (c >= 'A' && c <= 'Z')
        {
            arr[c - 'A'] = true;
        }
    }
    for (int i = 0; i < 26; i++)
{
    if (!arr[i])
    {
        cout << "NO";
        return 0;
    }
}
 
 cout << "YES";

//  else cout <<"YES";
return 0;
}
