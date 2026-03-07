//https://codeforces.com/contest/136/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[n];
    int ans[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        //arr[1] = 2
        //arr[2]=  3
        //arr[3] = 4
        //arr[4] = 1
    }
    for(int i=1; i<=n; i++){
        ans[arr[i]] = i;
        //ans[2] = 1
        //ans[3] = 2
        //ans[4] = 3
        //arr[1] = 4
    }
    for(int i=1; i<=n; i++){
        cout<<ans[i]<<" ";
        //ans[1]= 4
        //arr[2]= 1
    }

    return 0;
}