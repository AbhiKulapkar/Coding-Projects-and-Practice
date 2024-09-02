#include<bits/stdc++.h>
using namespace std;


int main(){
    string str;
    int alphabets = 0, digits = 0, special = 0;
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i])){
            alphabets++;
        } else if(isdigit(str[i])){
            digits++;
        } else {
            special++;
        }
    }

    cout<<"Alphabets: "<<alphabets<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Special Characters: "<<special<<endl;
    return 0;
}