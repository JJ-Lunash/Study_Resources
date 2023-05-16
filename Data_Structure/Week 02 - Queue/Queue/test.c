#include "Queue.h"
#include <stdio.h>

#define TEST_SIZE 10

void printQueueInfo(Queue *queue) {
  printf("Queue --------------------------\n");
  printf("Size: %zu\n", size(queue));
  printf("isEmpty: %s\n", isEmptyQueue(queue) ? "true" : "false");
  printf("peek: %d\n", peek(queue));
}

int main() {
  Queue *queue;

  queue = createQueue();
  for (int i = 0; i < TEST_SIZE; i++) {
    enqueue(queue, i * 2);
  }
  printQueueInfo(queue);
  // Queue --------------------------
  // Size: 10
  // isEmpty: false
  // peek: 0

  for (int i = 0; i < TEST_SIZE / 2; i++) {
    dequeue(queue);
  }
  printQueueInfo(queue);
  // Queue --------------------------
  // Size: 5
  // isEmpty: false
  // peek: 10

  for (int i = 0; i < TEST_SIZE / 2; i++) {
    dequeue(queue);
  }
  printQueueInfo(queue);
  // Queue --------------------------
  // Size: 0
  // isEmpty: true
  // peek: Error: Queue is empty // 이거 어떻게 해볼지 고민해보기

  destroyQueue(queue);
  return 0;
}