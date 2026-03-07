//
#include <iostream>
using namespace std;

int main() {

    int n,setMax=0,total=0;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>setMax){
           setMax=arr[i];
        }
    }
    for(int i=0; i<n; i++){
         total += setMax-arr[i];
    }
    cout<<total;
    return 0;
}