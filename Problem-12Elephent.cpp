//https://codeforces.com/problemset/problem/617/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int steps = n/5;
    int reminder = n%5;
    int total = steps + (reminder>0 ? 1 : 0);
    cout<< total;
    return 0;
}