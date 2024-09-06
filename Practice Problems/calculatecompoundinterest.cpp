#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, P, r, n, t;
    /*Where:

    A = Total amount (including interest)
    P = Principal (initial amount)
    r = Annual interest rate (as a decimal, so 10% becomes 0.10)
    n = Number of times interest is compounded per year
    t = Number of years*/

    cin >> P;
    cout << "Your initial amount is:  " << P << endl;
    cin >> r;
    cout << "Your annual interest rate is:  " << r << endl;
    cin >> n;
    cout << "Your number of compounding periods per year is:  " << n << endl;
    cin >> t;
    cout << "Your number of years you are going to invest your initial amount is:  " << t << endl;
    A = P * pow((1 + r/n), (n*t));
    cout << "The total amount after " << t << " years is:  " << A << endl;
}