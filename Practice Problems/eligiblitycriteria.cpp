#include <iostream>
#include <string>
using namespace std;

int main() {
    string NAME;
    string BRANCH;
    int PERCENTAGE;

    
    getline(cin, NAME);  // Using getline to capture the full name 
    cin >> BRANCH;
    cin >> PERCENTAGE;

    // Checking eligibility based on branch
    if (BRANCH == "MECH" && PERCENTAGE >= 80) {
        cout << "Congratulations " << NAME << "! You are Eligible for the MECH branch in RGIT. Please visit the campus for further process." << endl;
    } else if (BRANCH == "IT" && PERCENTAGE >= 90) {
        cout << "Congratulations " << NAME << "! You are Eligible for the IT branch in RGIT. Please visit the campus for further process." << endl;
    } else if (BRANCH == "EXTC" && PERCENTAGE >= 85) {
        cout << "Congratulations " << NAME << "! You are Eligible for the EXTC branch in RGIT. Please visit the campus for further process." << endl;
    } else if (BRANCH == "COMPS" && PERCENTAGE >= 93) {
        cout << "Congratulations " << NAME << "! You are Eligible for the COMPS branch in RGIT. Please visit the campus for further process." << endl;
    } else if (BRANCH == "AIDS" && PERCENTAGE >= 91) {
        cout << "Congratulations " << NAME << "! You are Eligible for the AIDS branch in RGIT. Please visit the campus for further process." << endl;
    } else {
        cout << "Sorry " << NAME << ", you are not eligible for the " << BRANCH << " branch in RGIT." << endl;
    }

    return 0;
}
