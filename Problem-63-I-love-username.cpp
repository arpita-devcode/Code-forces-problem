//https://codeforces.com/contest/155/problem/A
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int score;
    cin>>score;
    int maxscore =score;
    int minscore =score;
    int count=0;
    for(int i=1; i<n;i++){
        
        cin>>score;
        if(maxscore<score){
           maxscore = score;
           count ++;
        }
        else if(score<minscore){
           minscore = score;
           count++;
        }
    }
    cout<<count;
    return 0;
}