//https://codeforces.com/contest/732/problem/A

#include <iostream>
using namespace std;

int main() {

    int n,k;
    cin>>n>>k;
    for(int i=1; ;i++){
        int count= n*i;
        if(count % 10 ==k || count % 10==0){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}