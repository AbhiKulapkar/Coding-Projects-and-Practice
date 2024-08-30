#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int totalmarks, english, hindi, marathi;
    char name[50], Grade[8];
    float percentage;
    
    // Input student details
    cin >> name;
    cin >>Grade;
    cin >> english >> hindi >> marathi;

    totalmarks = english + hindi + marathi;
    percentage = totalmarks / 3.0;

    // Calculate division based on percentage
    if (percentage >= 80)
    {
        strcpy(Grade, "A");
    }
    else if (percentage >= 60)
    {
        strcpy(Grade, "B");
    }
    else if (percentage >= 40)
    {
        strcpy(Grade, "C");
    }
    else if (percentage >= 20)
    {
        strcpy(Grade, "D ");
    }
    else
    {
        strcpy(Grade, "F");
    }

    // Display the table header
    cout << setw(15) << left << "Name"
         << setw(10) << "Grade"
         << setw(10) << "English"
         << setw(10) << "Hindi"
         << setw(10) << "Marathi"
         << setw(15) << "Totalmarks"
         << setw(10) << "Percentage" << endl;

    // Display the student details
    cout << setw(15) << left << name
         << setw(10) << Grade
         << setw(10) << english
         << setw(10) << hindi
         << setw(10) << marathi
         << setw(15) << totalmarks
         << setw(10) << fixed << setprecision(2) << percentage << endl;

    return 0;
}
