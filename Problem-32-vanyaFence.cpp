//https://codeforces.com/problemset/problem/677/A
#include <iostream>
using namespace std;

int main() {

    int n,h,count=0;
    cin>>n>>h;
    for(int i=0; i<n;i++){
        int arr[n];
        cin>>arr[i];
        if(arr[i]>h){
           count +=2;
        }
        else{
            count ++;
        }
    }

    cout<<count;

    return 0;
}