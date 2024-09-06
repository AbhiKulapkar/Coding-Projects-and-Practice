#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, temp;
    cin >> a >> b;
    cout << "Before swapping: " << "a = " << a << ", b = " << b << endl;
    // Swapping without using a third variable
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: " << "a = " << a << ", b = " << b << endl;
    return 0;
}