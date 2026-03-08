//https://codeforces.com/contest/785/problem/A
#include <iostream>
using namespace std;

int main() {

    int n,count =0;
    cin>>n;
    for(int i=0; i<n; i++){
        string s; 
        cin>>s;
        if( s == "Icosahedron"){
             count += 20;
        }
        else if(s == "Cube"){
             count += 6;
        }
        else if(s == "Tetrahedron"){
            count += 4;
        }
        else if(s == "Dodecahedron"){
            count += 12;
        }
         else if(s == "Octahedron"){
            count += 8;
        }
    }

    cout<<count;

    return 0;
}