//https://codeforces.com/contest/1985/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;
    string s1,s2;
    for(int i=0; i<n; i++){
        cin>>s1>>s2;
        swap(s1[0],s2[0]);
        cout<<s1<<" "<<s2<<endl;
    }

    return 0;
}