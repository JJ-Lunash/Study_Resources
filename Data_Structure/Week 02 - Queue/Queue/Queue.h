#ifndef __QUEUE__
#define __QUEUE__

#include <stdbool.h>
#include <stddef.h>

typedef struct _Queue {
  DoubleLinkedList *storage;
} Queue;

Queue *createQueue(void);
Queue *copyQueue(Queue *queue);

size_t size(Queue *Queue);
bool isEmptyQueue(Queue *Queue);
bool enqueue(Queue *Queue, int value);
bool dequeue(Queue *Queue);
int peek(Queue *Queue);

void clearQueue(Queue *Queue);
void destroyQueue(Queue *Queue);

#endif // __QUEUE__
