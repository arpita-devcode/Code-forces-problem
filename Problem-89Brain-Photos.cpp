//https://codeforces.com/contest/707/problem/A
#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    bool color = false;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c;
            cin >> c;

            if(c == 'C' || c == 'M' || c == 'Y'){
                color = true;
            }
        }
    }

    if(color)
        cout << "#Color";
    else
        cout << "#Black&White";

    return 0;
}