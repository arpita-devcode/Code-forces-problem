//https://codeforces.com/contest/344/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    string s,prev;
    int group = 0;
    for(int i=0; i<n; i++){
        cin>>s;
        if(s!=prev){
            group++;
        }
         prev = s;
    }
    cout<<group;
    return 0;
}