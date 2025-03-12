\* Author:Mercy Nyaguthii
Reg no :BSE-05-0167/2024*/
#include <iostream>
#include <string>
using namespace std;

struct patient {
    string name;
    int age;
    string diagnosis;
};

void display(const patient &p1, const patient &p2) {
    cout << "Patient 1" << endl;
    cout << " Name: " << p1.name << endl;
    cout << " Age: " << p1.age << endl;
    cout << " Diagnosis: " << p1.diagnosis << endl;

    cout << "Patient 2" << endl;
    cout << " Name: " << p2.name << endl;
    cout << " Age: " << p2.age << endl;
    cout << " Diagnosis: " << p2.diagnosis << endl;
}

int main() {
    patient p1, p2;

    // Input for patient 1
    cout << "Enter details for Patient 1:" << endl;
    cout << " Name: ";
    getline(cin, p1.name);
    cout << " Age: ";
    cin >> p1.age;
    cin.ignore(); // Clear the input buffer
    cout << " Diagnosis: ";
    getline(cin, p1.diagnosis);

    // Input for patient 2
    cout << "Enter details for Patient 2:" << endl;
    cout << " Name: ";
    getline(cin, p2.name);
    cout << " Age: ";
    cin >> p2.age;
    cin.ignore(); // Clear the input buffer
    cout << " Diagnosis: ";
    getline(cin, p2.diagnosis);

    // Display details
    cout << "\nPatient Details:" << endl;
    display(p1, p2);

    cout << "\nMemory Addresses:" << endl;
    cout << "Patient 1" << endl;
    cout << " Name Address: " << &p1.name << endl;
    cout << " Age Address: " << &p1.age << endl;
    cout << " Diagnosis Address: " << &p1.diagnosis << endl;

    cout << "Patient 2" << endl;
    cout << " Name Address: " << &p2.name << endl;
    cout << " Age Address: " << &p2.age << endl;
    cout << " Diagnosis Address: " << &p2.diagnosis << endl;

    return 0;
}
