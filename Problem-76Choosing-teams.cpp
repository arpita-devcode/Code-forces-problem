//https://codeforces.com/contest/432/problem/A
#include <iostream>
using namespace std;

int main() {

    int n,k,count=0;
    cin>>n>>k;

    int contest = 5;
    for(int i=0 ;i<n ;i++){
        int y; 
        cin>>y;
        if((y+k)<=5){
            count++;
        }
    }
    if(count>=3){
        cout<<count/3;
    }
    else cout<<0<<endl;
    return 0;
}