//https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;

int main() {

    int n,x=0;
    cin>>n;
    for(int i=0; n>i; i++){
        string s;
        cin>>s;
        if(s == "X++" || s== "++X" ){
            x++;            
        }
        else{
            x--;
        }
    }
    cout<< x;
    return 0;
}