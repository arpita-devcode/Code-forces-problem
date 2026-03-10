//https://codeforces.com/contest/1371/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long sum = n * (n + 1) / 2; // sum of 1..n
        cout << sum << endl;
    }
    return 0;
}