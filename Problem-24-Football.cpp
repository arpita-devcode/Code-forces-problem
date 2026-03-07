//https://codeforces.com/problemset/problem/43/A
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string team1, team2;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        string team;
        cin >> team;

        // First team we see
        if (i == 0) {
            team1 = team;
            count1++;
        } else {
            if (team == team1) {
                count1++;
            } else {
                team2 = team;
                count2++;
            }
        }
    }

    // Compare counts and print winner
    if (count1 > count2) {
        cout << team1 << endl;
    } else {
        cout << team2 << endl;
    }

    return 0;
}