#include<bits/stdc++.h>
using namespace std;


int main(){
  string input;
  cin >> input;

  string reverseinput = input;
  reverse(reverseinput.begin(), reverseinput.end());

  if(input == reverseinput){
    cout << "The given string is a palindrome";
  }
  else{
    cout << "The given string is not a palindrome";
  }

}