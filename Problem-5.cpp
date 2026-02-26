
#include <iostream>
using namespace std;

int main()
{
    int solved = 0;
    int n;
    cin >> n;
    for (int i = 0; n > i; i++)
    {
        int arr[3];
        int count = 0;

        for (int j = 0; 3 > j; j++)
        {
            cin >> arr[j];
            count += arr[j];
        }
        if (count == 2 || count == 3)
        {
            solved++;
        }
    }
    cout << solved;
    return 0;
}