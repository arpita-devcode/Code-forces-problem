//https://codeforces.com/contest/1760/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char mx = 'a';
        for (char c : s) {
            mx = max(mx, c);
        }
        // 'a' -> 1, so offset by 'a' and add 1
        cout << (mx - 'a' + 1) << "\n";
    }
    return 0;
}