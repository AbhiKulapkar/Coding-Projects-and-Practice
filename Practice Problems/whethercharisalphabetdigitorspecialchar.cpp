#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch;

    cout << "Enter any character: " << endl;

    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is a alphabet character" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a digit" << endl;
    }
    else
    {
        cout << ch << " is a special character" << endl;
    }

    return 0;
}