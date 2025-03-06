/*Author:Mercy Nyaguthii
Reg no:BSE-05-0167/2024
*/
#include <iostream>

#define SIZE 5 // Size of the 1D array

void input1DArray(int arr[SIZE]) {
    cout << "Enter " << SIZE << " elements for the 1D array: " << endl;
    for (int i = 0; i < SIZE; i++) {
        std::cin >> arr[i];
    }
}

void print1DArray(int arr[SIZE]) {
    cout << "The 1D array elements are: " <<endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = " << arr[i] <<endl;
    }
}

int main() {
    int arr[SIZE];

    input1DArray(arr);
    print1DArray(arr);

    return 0;
}
