//https://codeforces.com/contest/723/problem/A
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
     
    
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> s1={a,b,c};
    sort(s1.begin(), s1.end());
    int res = (s1[1]-s1[0]) + (s1[2]-s1[1]);
    cout<<res;

    return 0;
}
