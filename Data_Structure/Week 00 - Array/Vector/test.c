#include <stdio.h>
#include "Vector.h"

#define TEST_SIZE 10

void printVector(Vector *arr) {
    printf("Vector: [");
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", get(arr, i));
    }
    printf("]\n");
}

int main() {
    Vector *vec = createVector(TEST_SIZE);
    Vector *vec2;

    for (int i = 0; i < TEST_SIZE; i++) {
        insert(vec, i, i * 2);
    }

    printVector(vec); // [0 2 4 6 8 10 12 14 16 18]
    get(vec, 2); // 4
    get(vec, 5); // 10  
    get(vec, 20); // Error: Out of range
    get(vec, -1); // Error: Out of range

    getSize(vec); // 10
    getCapacity(vec); // 10

    pushBack(vec, 100);
    printVector(vec); // [0 2 4 6 8 10 12 14 16 18 100]

    getSize(vec); // 11
    getCapacity(vec); // 20

    for (int i = 0; i < TEST_SIZE; i++) {
        insert(vec2, i, i * 3);
    }

    printVector(vec2); // [0 3 6 9 12 15 18 21 24 27]
    swapVector(vec, vec2);

    printVector(vec); // [0 3 6 9 12 15 18 21 24 27]
    printVector(vec2); // [0 2 4 6 8 10 12 14 16 18 100]

    clearVector(vec); // clear all elements in vector->data
    destroyVector(vec);
    destroyVector(vec2);

    return 0;
}