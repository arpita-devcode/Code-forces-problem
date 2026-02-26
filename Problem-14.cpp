// https://codeforces.com/problemset/problem/977/A
#include <iostream>
using namespace std;

int main()
{

    int n, number,result ;
    cin >> number >> n;
    for (int i = 0; n > i; i++)
    {
        if(number%10 == 0){
           number = number/10;
        }
        else number = number - 1;
    }
    cout<<number;
    return 0;
}