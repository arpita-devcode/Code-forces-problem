//https://codeforces.com/contest/1512/problem/A
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        map<int,int> count;

        for(int i=0;i<n;i++){
            cin >> a[i];
            count[a[i]]++;
        }

        for(int i=0;i<n;i++){
            if(count[a[i]] == 1){
                cout << i+1 << endl; // 1-based index
                break;
            }
        }
    }

    return 0;
}