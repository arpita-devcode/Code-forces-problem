//https://codeforces.com/contest/1722/problem/B
#include <iostream>
using namespace std;

int main() {

     int t;
    cin >> t;

    while(t--){
        int n;
        string s,t2;
        cin >> n;
        cin >> s >> t2;

        for(int i=0;i<n;i++){
            if(s[i]=='G') s[i]='B';
            if(t2[i]=='G') t2[i]='B';
        }

        if(s==t2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}