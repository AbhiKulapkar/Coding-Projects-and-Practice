#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;

    cin >> str1 >> str2;

    bool areequal = true;
    
    
    if (str1.length() != str2.length()){
        areequal = false;
    } else {
        for(int i=0;i<str1.length();i++){
            if(str1[i] != str2[i]){
                areequal = false;
                break;
            }
        }
    }

    //display results
    if (areequal) {
        cout << "The strings are equal." << endl;
    } else {
        cout << "The strings are not equal." << endl;
    }

    return 0;

}