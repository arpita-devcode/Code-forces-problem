#include <iostream>
using namespace std;

int main() {

    long long i,j,num;
    cin>>i>>j;
    long long countodd = i-(i/2);
    if(countodd>=j){
        num = j*2 - 1;
        cout<< num;
    }
    else{
        num = (j*2) - (countodd*2);
        cout<< num;
    }
    // cout<< countodd;
    return 0;
}