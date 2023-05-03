#include <stdio.h>
#include "FixedArray.h"

#define TEST_SIZE 10

void printFixedArray(FixedArray *arr) {
    printf("FixedArray: [");
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", getFixedArray(arr, i));
    }
    printf("]\n");
}

int main() {
    FixedArray *arr = createFixedArray(TEST_SIZE);
    FixedArray *arr2 = copyFixedArray(arr);

    for (int i = 0; i < TEST_SIZE; i++) {
        setFixedArray(arr, i, i * 2);
    }

    printFixedArray(arr); // [0 2 4 6 8 10 12 14 16 18]
    getFixedArray(arr, 2); // 4
    getFixedArray(arr, 5); // 10
    getFixedArray(arr, 20); // Error: Out of range
    getFixedArray(arr, -1); // Error: Out of range

    setFixedArray(arr, 2, 100);
    printFixedArray(arr); // [0 2 100 6 8 10 12 14 16 18]

    getSizeFixedArray(arr); // 10

    clearFixedArray(arr); // clear all elements in array->data
    deleteFixedArray(arr);
    return 0;
}