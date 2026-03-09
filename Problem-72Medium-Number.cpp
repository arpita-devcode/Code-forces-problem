// https://codeforces.com/contest/1760/problem/A
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> vec={a,b,c};
        sort(vec.begin(),vec.end());
        cout<<vec[1]<<endl;;
        }

    return 0;
}