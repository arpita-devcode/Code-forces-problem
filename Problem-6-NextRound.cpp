//https://codeforces.com/problemset/problem/158/A
#include <iostream>
using namespace std;

int main() {

    int n;
    int k;
    int countdown=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0; n>i ;i++){
        cin>>arr[i];
    }
    int value = arr[k-1];
    for(int i=0; n>i; i++){
        if(arr[i]>=value && arr[i]>0){
            countdown++;
        }
    }
    cout<<countdown;//this the output
    return 0;
}