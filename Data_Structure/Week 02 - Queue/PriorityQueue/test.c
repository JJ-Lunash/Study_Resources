#include "PriorityQueue.h"
#include <stdio.h>

#define TEST_SIZE 10

void printPriorityQueue(PriorityQueue *queue) {
  printf("PriorityQueue --------------------------\n");
  printf("Size: %zu\n", size(queue));
  printf("isEmpty: %s\n", isEmpty(queue) ? "true" : "false");
  printf("peek: %d\n", peek(queue));
}

int main() {
  PriorityQueue *queue;

  queue = createPriorityQueue();

  for (int i = 0; i < TEST_SIZE; i++) {
    enqueue(queue, i * 2, i % 3);
  }

  printPriorityQueue(queue);
  // PriorityQueue --------------------------
  // Size: 10
  // isEmpty: false
  // peek: 0

  for (int i = 0; i < TEST_SIZE / 2; i++) {
    dequeue(queue);
  }
  printPriorityQueue(queue);
  // PriorityQueue --------------------------
  // Size: 5
  // isEmpty: false
  // peek: 2

  for (int i = 0; i < TEST_SIZE / 2; i++) {
    dequeue(queue);
  }
  printPriorityQueue(queue);
  // PriorityQueue --------------------------
  // Size: 0
  // isEmpty: true
  // peek: Error: Queue is empty // 이거 어떻게 해볼지 고민해보기

  distroyPriorityQueue(queue);
  return 0;
}