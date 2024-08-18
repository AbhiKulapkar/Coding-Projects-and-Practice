#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main() {
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? cout << "Alphabet" : cout << "Not an alphabet";
    
    return 0;
}