//
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int diff = abs(b - a);
        int steps = diff / 10; // steps
        if (diff % 10 != 0)
            steps++; 

        cout << steps << endl;
    }

    return 0;
}