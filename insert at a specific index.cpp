/*NAME:MERCY NYAGUTHII
ADM:BSE-05-0167/2024
*/
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 2;
    int value = 25;

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    size++;

    printf("Array after insertion at index %d:\n", index);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

