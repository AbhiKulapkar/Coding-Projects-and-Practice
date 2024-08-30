#include<bits/stdc++.h>

using namespace std;

int main() {
    int year;
    cin >> year;
    (year % 4 == 0 && year % 100 != 0) ? cout<<" is leap year "<<year : 
    (year % 400 == 0) ? cout<<"is leap year " : cout << year <<" is not leap year"<<endl;
}