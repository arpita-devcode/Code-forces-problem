//https://codeforces.com/contest/1772/problem/A
#include <iostream>
#include<algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        
        int res = (s[0]-'0')+(s[2]-'0');
        cout<<res<<endl;
    }

    return 0;
}