//https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include<cctype>


using namespace std;

int main() {
 
    string s1, s2, letter_1, letter_2;
    cin>>s1>>s2;
    for(int i=0; i<s1.length(); i++){
      letter_1 = toupper(s1[i]);
      letter_2 = toupper(s2[i]);
      if(letter_1 == letter_2){
          continue;
      }
      else if(letter_1>letter_2){
        cout<< 1;
        break;
      }
      else{
        cout<< -1;
        break;
      }
    }
    if(letter_1 == letter_2){
        cout<<0;
    }
    return 0;
}