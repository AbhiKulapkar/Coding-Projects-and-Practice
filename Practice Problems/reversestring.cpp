#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, length;
    char str[100];
    char reverse[100];
    
    cout << "Enter a string: ";
    cin >> str;
    
    length = strlen(str);
    j = 0;
    
    for (i = length - 1; i >= 0; i--) {
        reverse[j] = str[i];  // Corrected assignment operator
        j++;
    }
    
    reverse[j] = '\0';  // Null-terminate the reversed string
    
    cout << "Reversed string: " << reverse << endl;

    return 0;
}
