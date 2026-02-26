//https://codeforces.com/problemset/problem/576/A
#include<iostream>
using namespace std;
int main(){
    int n,k,w,count=0,borrow=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
          count += i * k;
    }
     if(count>n){
            borrow = count-n;
          }
          else 0;
    cout<< borrow;
}