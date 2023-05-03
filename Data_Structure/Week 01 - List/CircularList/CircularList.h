#ifndef __CIRCULARLIST__
#define __CIRCULARLIST__

#include <stdbool.h>
#include <stddef.h>

typedef struct _node {
    int value;
    struct _node *next;
    struct _node *prev;
}       ListNode;

typedef struct _circularList {
    struct _node *head;
    size_t size;
}       CircularList;

CircularList *createCircularList();
CircularList *copyCircularList(CircularList *circularList);
ListNode *createNode(int value);

bool addNode(CircularList *circularList, ListNode *node, int index);
bool addNodeToHead(CircularList *circularList, ListNode *node);
bool removeNodeByIndex(CircularList *circularList, int index);
bool removeHeadNode(CircularList *circularList);


/*
getNodeByIndex()를 구현할 때, 최적화를 진행해보세요.
어떻게 하면 더 적은 비용으로 노드를 찾을 수 있도록 구현할 수 있을까요? 
*/
ListNode *getNodeByIndex(CircularList *circularList, int index);
ListNode *getHeadNode(CircularList *circularList);
ListNode *getLastNode(CircularList *circularList);

int getValueByIndex(CircularList *circularList, int index);

size_t getSizeCircularList(CircularList *circularList);

void displayCircularList(CircularList *circularList);
void clearCircularList(CircularList *circularList);
void distroyCircularList(CircularList *circularList);

#endif