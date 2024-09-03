#include<bits/stdc++.h>
using namespace std;

int main(){
   int num, last;
   cin >> num;
   last=num%10;
   
   cout<<"the last digit of the entered number is "<<last<<endl;


   while(num>=10){
         num = num/10;
   }
    cout<<"the first digit of the entered number is "<<num<<endl;
   return 0;
}