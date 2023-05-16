#include "Stack.h"
#include <stdio.h>

#define TEST_SIZE 10

void printQueueInfo(Stack *stack) {
  printf("Stack --------------------------\n");
  printf("Size: %zu\n", size(stack));
  printf("isEmpty: %s\n", isEmpty(stack) ? "true" : "false");
  printf("peek: %d\n", peek(stack));
}

int main() {
  Stack *stack;

  stack = createStack(TEST_SIZE);

  for (int i = 0; i < TEST_SIZE; i++) {
    push(stack, i * 2);
  }

  printf("capacity: %zu\n", capacity(stack));
  // 10

  printQueueInfo(stack);
  // Stack --------------------------
  // Size: 10
  // isEmpty: false
  // peek: 18

  for (int i = 0; i < TEST_SIZE / 2; i++) {
    pop(stack);
  }

  printQueueInfo(stack);
  // Stack --------------------------
  // Size: 5
  // isEmpty: false
  // peek: 8

  for (int i = 0; i < TEST_SIZE / 2; i++) {
    pop(stack);
  }

  printQueueInfo(stack);
  // Stack --------------------------
  // Size: 0
  // isEmpty: true
  // peek: Error: Stack is empty // 이거 어떻게 해볼지 고민해보기

  destroyStack(stack);
  return 0;
}