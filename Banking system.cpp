\* Author:Mercy Nyaguthii
Reg no :BSE-05-0167/2024*/
#include<iostream>
#include <string>
using namespace std;

// Define the structure for customer account management
    struct customeraccountmanagement {
    string name;
    double accountbalance;
    string lasttransaction;
};

// Function to display customer details
void displaycustomer(const customeraccountmanagement& c1, const customeraccountmanagement& c2) {
    cout << "Customer 1" << endl;
    cout << " Name: " << c1.name << endl;
    cout << " Account Balance: " << c1.accountbalance << endl;
    cout << " Last Transaction: " << c1.lasttransaction << endl;

    cout << "Customer 2" << endl;
    cout << " Name: " << c2.name << endl;
    cout << " Account Balance: " << c2.accountbalance << endl;
    cout << " Last Transaction: " << c2.lasttransaction << endl;
}

int main() {
    customeraccountmanagement c1, c2;

    // Input details for customer 1
    cout << "Enter details for Customer 1:" << endl;
    cout << " Name: ";
    cin >> c1.name;
    cout << " Account Balance: ";
    cin >> c1.accountbalance;
    cout << " Last Transaction: ";
    cin >> c1.lasttransaction;

    // Input details for customer 2
    cout << "Enter details for Customer 2:" << endl;
    cout << " Name: ";
    cin >> c2.name;
    cout << " Account Balance: ";
    cin >> c2.accountbalance;
    cout << " Last Transaction: ";
    cin >> c2.lasttransaction;

    // Display customer details
    cout << "\nCustomer Details:" << endl;
    displaycustomer(c1, c2);

    return 0;
}
	