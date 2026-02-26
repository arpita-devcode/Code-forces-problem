// https://codeforces.com/problemset/problem/236/A
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s1;
    int sum = 0;
    cin >> s1;                            // s e v e n k p l u s
    for (int i = 0; s1.length() > i; i++) // s1[0]= s ; 10>0 ; i++
    {
        bool duplicate = false;     // s = not false
        for (int j = 0; i > j; j++) // j[0] = s
        {
            if (s1[i] == s1[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            sum++;
        }
    }
    if (sum % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}