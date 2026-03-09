//https://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        string letter;
        cin>>letter;
        int len= letter.length();
        if(len>10){
            cout<< letter[0] << len-2 << letter[len-1]<<endl;
        }
        else{
            cout<< letter<<endl;
        }
    }

    return 0;
}