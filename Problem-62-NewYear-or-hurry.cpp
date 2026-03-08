//https://codeforces.com/contest/750/problem/A
#include <iostream>
using namespace std;

int main() {

    int n,time,res,count=0,sum=0;
    cin>>n>>time;
    res = 240-time;
    for(int i=1; i<=n; i++){
         sum += 5*i;
        if(sum>res){
            break;
        }
        count++;
    }
    cout<<count;
    return 0;
}