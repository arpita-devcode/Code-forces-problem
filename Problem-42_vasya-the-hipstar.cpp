//https://codeforces.com/contest/581/problem/A
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a,b;
    cin>>a>>b;
    int same = min(a,b);
    int diff = (max(a,b)-min(a,b))/2;
    cout<<same<<" "<<diff<<endl;
    return 0;
}