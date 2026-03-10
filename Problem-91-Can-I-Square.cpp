//https://codeforces.com/contest/1915/problem/C
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long sum = 0;

        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            sum += x;
        }

        long long s = sqrt(sum);

        if(s*s == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}