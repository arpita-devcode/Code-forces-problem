//https://codeforces.com/contest/1950/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(c>a && c>b && b>a){
            cout<<"STAIR"<<endl;
        }
        else if(b>c && b>a){
            cout<<"PEAK"<<endl;
        }
        else cout<<"NONE"<<endl;
    }

    return 0;
}