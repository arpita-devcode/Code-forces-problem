//https://codeforces.com/contest/233/problem/A
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 1){
        cout << -1;
        return 0;
    }

    for(int i=1;i<=n;i+=2){
        cout << i+1 << " " << i << " ";
    }

    if(n % 2 != 0){
        cout << n; // handle last element if needed
    }

    return 0;
}