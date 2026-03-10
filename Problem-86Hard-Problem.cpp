#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long ans = 0;
        long long freeSeats = 0;

        // seat row 1 monkeys
        ans += min(a, m);
        freeSeats += m - min(a, m);

        // seat row 2 monkeys
        ans += min(b, m);
        freeSeats += m - min(b, m);

        // seat flexible monkeys
        ans += min(freeSeats, c);

        cout << ans << "\n";
    }
    return 0;
}