#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, firstDigit, lastDigit, digits, swappedNumber;

    // Input a number from the user
    
    cin >> number;

    // Find the last digit
    lastDigit = number % 10;

    // Find the number of digits - 1
    digits = (int)log10(number);

    // Find the first digit
    firstDigit = (int)(number / pow(10, digits));

    // Calculate the swapped number
    swappedNumber = lastDigit * pow(10, digits); // Place the last digit in the first place
    swappedNumber += number % (int)pow(10, digits); // Add the middle part of the number
    swappedNumber -= lastDigit; // Remove the old last digit
    swappedNumber += firstDigit; // Add the first digit to the last place

    // Output the result
    cout << "Number after swapping first and last digit: " << swappedNumber << endl;

    return 0;
}