\*Author:Mercy Nyaguthii
Reg no:BSE-05-0167/2024
*\
#include <iostream>
using namespace std;

#define X 2 // Dimension size in the x direction
#define Y 2 // Dimension size in the y direction
#define Z 2 // Dimension size in the z direction

void input3DArray(int arr[X][Y][Z]) {
    cout << "Enter " << X * Y * Z << " elements for the 3D array: " << endl;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                cin >> arr[i][j][k];
            }
        }
    }
}

void print3DArray(int arr[X][Y][Z]) {
    cout << "The 3D array elements are: " << std::endl;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
     cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }
}

int main() {
    int arr[X][Y][Z];

    input3DArray(arr);
    print3DArray(arr);

    return 0;
}
