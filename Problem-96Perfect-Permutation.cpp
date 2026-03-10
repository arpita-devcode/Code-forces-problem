//https://codeforces.com/contest/233/problem/A
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 2 != 0){
        cout << -1 << endl; // no perfect permutation possible
    } else {
        for(int i = 1; i <= n; i += 2){
            cout << i+1 << " " << i << " ";
        }
        cout << endl;
    }

    return 0;
}