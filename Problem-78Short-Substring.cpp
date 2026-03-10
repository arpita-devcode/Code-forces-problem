//https://codeforces.com/contest/1367/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        string s;
        cin>>s;
        cout<<s[0];
        for(int j=1;j<s.size();j+=2){
            cout<<s[j];
        }
        cout<<endl;
    }

    return 0;
}