//https://codeforces.com/contest/510/problem/A
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool right = true; // direction of snake on even rows

    for(int i=1; i<=n; i++){
        if(i % 2 != 0){ // odd row
            for(int j=0;j<m;j++)
                cout << "#";
        } else { // even row
            if(right){
                for(int j=1;j<m;j++)
                    cout << ".";
                cout << "#";
            } else {
                cout << "#";
                for(int j=1;j<m;j++)
                    cout << ".";
            }
            right = !right; // alternate direction
        }
        cout << endl;
    }

    return 0;
}