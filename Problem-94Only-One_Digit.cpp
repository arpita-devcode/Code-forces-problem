//https://codeforces.com/contest/2126/problem/A
#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int x = 0, y = 0;

        for(char c : s){
            if(c=='L') x--;
            else if(c=='R') x++;
            else if(c=='U') y++;
            else if(c=='D') y--;
        }

        if(x==0 && y==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}