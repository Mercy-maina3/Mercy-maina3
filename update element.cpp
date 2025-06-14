/*NAME:MERCY NYAGUTHII
ADM:BSE-05-0167/2024
*/
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int index = 1;
    int newValue = 99;

    arr[index] = newValue;

    printf("Array after updating index %d to %d:\n", index, newValue);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

