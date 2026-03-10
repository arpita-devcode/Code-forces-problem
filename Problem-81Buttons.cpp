//https://codeforces.com/contest/1858/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        int res = a+b;
        if(a>b){
            cout<<"First"<<endl;
        }
        else if(b>a){
            cout<<"Second"<<endl;
        } 
        
             
        else {
            if(c%2 == 0){
            cout<<"Second"<<endl; 
        }
        else cout<<"First"<<endl;
        }
        
    }

    return 0;
}