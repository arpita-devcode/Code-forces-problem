#include <iostream>
using namespace std;

int main()
{

    int N, K, L, C, D, P, nl, np;
    cin >> N >> K >> L >> C >> D >> P >> nl >> np;
    int drink = (K * L) / nl;
    int lime = (C * D) ;
    int sol = (P) / np;
    if (drink < lime && drink < sol)
    {
        cout << drink/N;
    }
    else if (lime < sol && lime < drink)
    {
        cout << lime/N;
    }
    else
        cout << sol/N;
    return 0;
}