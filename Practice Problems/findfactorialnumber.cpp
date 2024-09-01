#include<bits/stdc++.h>
using namespace std;

int main(){
    int number, i;
    long long factorial =1;
    cin>>number;


    factorial = 1;
    i=1;

    while(i<=number) {
        factorial *= i;    //factorial = factorial * i;
        i++;
    }


    cout<<"Factorial of "<<number<<" is "<<factorial<<endl;
    return 0;
 
}