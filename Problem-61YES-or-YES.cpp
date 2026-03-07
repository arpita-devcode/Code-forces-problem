//https://codeforces.com/contest/1703/problem/A
#include <iostream>
#include<cctype>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        for(int j=0; j<s.size(); j++){
            s[j] = tolower(s[j]);
        }
        if(s == "yes") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}