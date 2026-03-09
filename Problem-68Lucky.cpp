//https://codeforces.com/contest/1676/problem/A
#include <iostream>
using namespace std;

int main() {

    int n,sum=0,sum1=0;
    cin>>n;
    
    for(int i=0; i<n; i++){
        string s1;
        cin>>s1;
        int sum = (s1[0]-'0')+((s1[1]-'0'))+(s1[2]-'0');
        int sum1 = (s1[3]-'0')+(s1[4]-'0')+(s1[5]-'0');
        if(sum1==sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}