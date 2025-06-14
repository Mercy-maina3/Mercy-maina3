/*NAME:MERCY NYAGUTHII
ADM:BSE-05-0167/2024
*/
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int value = 30;
    int pos = -1;

    // Find position
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            pos = i;
            break;
        }
    }

    // Delete by shifting
    if (pos != -1) {
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    printf("Array after deleting value %d:\n", value);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

