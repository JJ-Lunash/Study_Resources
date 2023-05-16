#ifndef __PRIORITYPriorityQueue__
#define __PRIORITYPriorityQueue__

#include <stdbool.h>
#include <stddef.h>

typedef struct _PriorityQueueNode {
  int value;
  int priority;
  struct _PriorityQueueNode *next;
} PriorityQueueNode;

typedef struct _PriorityQueue {
  PriorityQueueNode *head;
  size_t size;
} PriorityQueue;

PriorityQueue *createPriorityQueue(void);
PriorityQueue *copyPriorityQueue(PriorityQueue *PriorityQueue);
PriorityQueueNode *createPriorityQueueNode(int value, int priority);

size_t size(PriorityQueue *PriorityQueue);
bool isEmpty(PriorityQueue *PriorityQueue);
bool enqueue(PriorityQueue *PriorityQueue, int value, int priority);
bool dequeue(PriorityQueue *PriorityQueue);
int peek(PriorityQueue *PriorityQueue);

void clearPriorityQueue(PriorityQueue *PriorityQueue);
void destroyPriorityQueue(PriorityQueue *PriorityQueue);

#endif // __PRIORITYPriorityQueue__
