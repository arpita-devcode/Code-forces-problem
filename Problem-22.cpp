#include <iostream>
#include<vector>
using namespace std;

int main() {

    int n; 
    cin>> n;
    vector<int>height;
    for(int i=0; i<n; i++){
        int n;
        cin>> n;
        height.push_back(n); 
        }
        int maxH=0; int maxI=0;int minH=101; int minI= n-1;
        for(int i=0; i<n; i++){
            if(height[i]>maxH){
                maxH=height[i];
                maxI = i;
            }
            if(height[i]<=minH){
                minH = height[i];
                minI =i;
            }
        } 
        if(minI>maxI){
            cout<<maxI+n-1-minI<<endl;
        }
        else{
            cout<< maxI+n-1-1-minI<<endl;
        }
    return 0;
}