#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    cout << "Length of the string is: " << length << endl;
    return 0;
}