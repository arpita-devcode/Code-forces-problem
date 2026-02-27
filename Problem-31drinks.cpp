///https://codeforces.com/problemset/problem/200/B
#include <iostream>
using namespace std;

int main() {

    double n,total=0;
    double value=0;
    cin>>n;
    for(int i=0; i<n; i++){
        
        cin>>value;
        total = value+total;
    }
    double divide = total/n;
    cout<< divide;
    return 0;
}