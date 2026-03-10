//https://codeforces.com/contest/2167/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a == b && a == c && a == d){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}