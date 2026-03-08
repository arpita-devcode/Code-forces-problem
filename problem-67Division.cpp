//https://codeforces.com/contest/1669/problem/A
#include <iostream>
using namespace std;

int main() {

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        if(m>=1900){
            cout<<"Division 1"<<endl;
        }
        else if(m>=1600 && m<=1899){
            cout<<"Division 2"<<endl;
        }
        else if(m>=1400 && m<= 1599){
            cout<<"Division 3"<<endl;
        }
        else{
            cout<<"Division 4"<<endl;
        }
    }

    return 0;
}