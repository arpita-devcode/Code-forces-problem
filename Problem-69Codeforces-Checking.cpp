//https://codeforces.com/contest/1791/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    string check = "codeforces";
    for(int i=0; i<n; i++){
        char s1;
        bool exist = false;
        cin>>s1;
        for(int j=0; j<10; j++ ){
            if(s1 == check[j]){
               exist = true;
            }
        }
        if(exist){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}