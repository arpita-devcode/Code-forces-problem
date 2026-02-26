//https://codeforces.com/problemset/problem/50/A
#include <iostream>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;
    int rec= n*m;
    int domino = rec/2; //this used to get how many domino can be placed here
    cout<<domino;
    return 0;
}