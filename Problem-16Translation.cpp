//https://codeforces.com/problemset/problem/41/A

//reverse string
#include <iostream>
// #include <utility>
using namespace std;

int main() {

    string s1,s2;
    cin>>s1>>s2;
    int length = s1.length();
    for(int i=0; i<length/2; i++){
       swap(s1[i],s1[length-i-1]);
    }
    if(s2==s1){
        cout << "YES";
    }
    else cout<< "NO";
    return 0;
}