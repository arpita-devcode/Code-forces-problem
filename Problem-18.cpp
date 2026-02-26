#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1]={0};
    
    int k;
    cin>>k;
    for(int i=0; i<k; i++){
        int x;
        cin>>x;
        arr[x]=1;
    }
    int l;
    cin>>l;
    for(int i=0; i<l; i++){
        int x;
        cin>>x;
        arr[x]=1;
    }
    for(int i=1; i<=n; i++){
        if(arr[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}