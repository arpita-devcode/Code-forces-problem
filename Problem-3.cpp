//https://codeforces.com/problemset/problem/1/A

//rating 1000
#include <iostream>

using namespace std;

int main()
{

    long long m, n, a;
    cin >> m >> n >> a;
    long long flagstone = (long long)ceil((long double)m / a) *
                          (long long)ceil((long double)n / a); //here we used a formula- (m/a)*(n/a)
    cout << flagstone;
    return 0;
}