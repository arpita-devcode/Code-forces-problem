//https://codeforces.com/problemset/problem/427/A
//Police-Recurites
#include <iostream>
using namespace std;

int main() {

    int n,untreated=0,police=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]>0){
        police += arr[i];
      }
      else{
        untreated ++;
        if(police>0){
            police--;
            untreated--;
        }
      }
     
    }
    cout<<untreated;
      
    return 0;
}