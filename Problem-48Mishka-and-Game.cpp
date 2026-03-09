//https://codeforces.com/contest/703/problem/A
#include <iostream>
using namespace std;

int main() {

    int n,count1=0,count2=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int m,c;
        cin>>m>>c;
        if(m>c){
            count1++;
        }
        else if(c>m){
            count2++;
        }
        
    }
    if(count1>count2){
        cout<<"Mishka"<<endl;
    }
    else if(count1==count2){
        cout<<"Friendship is magic!^^"<<endl;
    }
    else{
        cout<<"Chris"<<endl;
    }

    return 0;
}