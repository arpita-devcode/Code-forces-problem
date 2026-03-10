//https://codeforces.com/contest/1374/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x,y,n;
        cin>>x>>y>>n;
        int k = n - (n % x) + y;

        if(k > n){
            k -= x;
        }

        cout << k << endl;


    }

    return 0;
}