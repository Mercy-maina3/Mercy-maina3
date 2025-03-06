/*Author:Mercy Nyaguthii
Reg no:BSE-05-0167/2024
*/
#include <iostream>
using namespace std;

#define ROWS 3 // Number of rows
#define COLS 4 // Number of columns

void input2DArray(int arr[ROWS][COLS]) {
    cout << "Enter " << ROWS * COLS << " elements for the 2D array: " << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
        }
    }
}

void print2DArray(int arr[ROWS][COLS]) {
    std::cout << "The 2D array elements are: " << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }
}

int main() {
    int arr[ROWS][COLS];

    input2DArray(arr);
    print2DArray(arr);

    return 0;
}
