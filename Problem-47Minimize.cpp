//https://codeforces.com/contest/2009/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        int res= abs(a-b);
        cout<<res<<endl;
    }

    return 0;
}