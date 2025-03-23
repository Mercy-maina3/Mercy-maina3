/*NAME:MERCY NYAGUTHII
REG NO:BSE-05-0167/2024
*/
#include <iostream>
using namespace std;

int main() {
    int bookID;
    int dueDate;
	int returnDate;
    int daysOverdue ;
    int fineRate ;
    int fineAmount ;

    // prompt to enter
    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date : ";
    cin >> dueDate;
    cout << "Enter Return Date : ";
    cin >> returnDate;

    // Calculate days overdue
    if (returnDate > dueDate) {
        daysOverdue = returnDate - dueDate;

        // Determine the fine rate  on the overdue days
        if (daysOverdue <= 7) {
            fineRate = 20;
        } else if (daysOverdue <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }

        // Calculate fine amount
        fineAmount = daysOverdue * fineRate;
    }

    // Displaying results
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Fine Rate: Ksh. " << fineRate << endl;
    cout << "Fine Amount: Ksh. " << fineAmount << endl;

    return 0;
}
