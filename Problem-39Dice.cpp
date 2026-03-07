#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int w, y;
    cin >> w >> y;

    int max1 = max(w, y);
    int favorable = 6 - max1 + 1; // correct favorable rolls
    int total = 6;

    int g = __gcd(favorable, total); // reduce fraction

    cout << favorable / g << "/" << total / g << endl;

    return 0;
}