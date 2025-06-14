/*NAME:MERCY NYAGUTHII
ADM:BSE-05-0167/2024
*/
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    arr[size] = 60;  // Insert at the end
    size++;

    printf("Array after insertion at end:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

