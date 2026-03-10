//codeforces.com/contest/2126/problem/A
#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        set<int> digits;
        int temp = x;
        while(temp > 0){
            digits.insert(temp % 10);
            temp /= 10;
        }

        for(int i=0;i<=9;i++){
            if(digits.count(i)){
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}