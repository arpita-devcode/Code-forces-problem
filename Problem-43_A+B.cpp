//https://codeforces.com/contest/1999/problem/A
#include <iostream>
using namespace std;

int main() {

    int n,add=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int value;
        cin>>value;
        add = (value/10) + (value%10) ;
        cout<<add<<" ";
    }

    return 0;
}