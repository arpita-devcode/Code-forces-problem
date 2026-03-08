//https://codeforces.com/contest/1899/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i; i<n; i++){
        int m;
        cin>>m;
        if(m % 3 ==0){
          cout<<"Second"<<endl;
        }
        else  cout<<"First"<<endl;
    }

    return 0;
}