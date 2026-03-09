//https://codeforces.com/contest/1873/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s == "abc" || s == "acb" || s== "cba" || s=="bac"){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}