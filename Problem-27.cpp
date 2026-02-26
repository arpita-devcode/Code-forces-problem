
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    for(int i=0; i<s1.length();i++){
        if(s1.substr(i,3) == "WUB"){
           cout<< " ";
           i += 2;
        }
        else{
            cout<<s1[i];
        }
    }
}