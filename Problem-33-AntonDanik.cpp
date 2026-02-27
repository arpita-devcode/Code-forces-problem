//https://codeforces.com/problemset/problem/734/A
#include <iostream>
using namespace std;

int main() {
    int count1=0,count2=0;
    int n;
    cin>>n;
    string Anton;
    cin>>Anton;
    for(int i=0;i<Anton.length();i++){
        if(Anton[i]=='A'){
            count1++;
        }
        else if(Anton[i]=='D'){
             count2++;
        }
    }
       if(count1>count2){
        cout<<"Anton";
       }
       else if(count1==count2){
         cout<<"Friendship";
       }
       else{
        cout<<"Danik";
       }
    return 0;
}