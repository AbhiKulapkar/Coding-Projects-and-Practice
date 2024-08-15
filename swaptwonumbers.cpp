#include<bits/stdc++.h>

int main() {
    int a = 5, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a: " << a << " b: " << b << std::endl;
    return 0;
}
