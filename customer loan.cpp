/*NAME:MERCY NYAGUTHII
REG NO:BSE-05-0167/2024
*/
#include <iostream>
using namespace std;

// Function prototype
void checkLoanEligibility(int age, int income);

int main() {
    int age, income;

    // User-friendly prompts to input age and income
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your annual income (in Sh): ";
    cin >> income;

    // Call the function to check eligibility
    checkLoanEligibility(age, income);

    return 0;
}

// Function definition
void checkLoanEligibility(int age, int income) {
    if (age >= 21 && income >= 21000) {
        cout << "Congratulations, you qualify for a loan." << endl;
    } else {
        cout << "Unfortunately, we are unable to offer you a loan at this time." << endl;
    }
}
