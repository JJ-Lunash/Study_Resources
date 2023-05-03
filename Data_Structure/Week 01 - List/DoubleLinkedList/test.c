#include <stdio.h>
#include "DoubleLinkedList.h"

#define TEST_SIZE 10

int main() {
    DoubleLinkedList *list = createDoubleLinkedList();

    for (int i = 0; i < TEST_SIZE; i++) {
        addNodeToHead(list, createNode(i * 2));
    }

    displayDoubleLinkedList(list); // [18, 16, 14, 12, 10, 8, 6, 4, 2, 0]
    getSizeDoubleLinkedList(list); // 10

    addNodeToHead(list, createNode(100));
    displayDoubleLinkedList(list); // [100, 18, 16, 14, 12, 10, 8, 6, 4, 2, 0]
    getSizeDoubleLinkedList(list); // 11

    addNode(list, createNode(200), 5);
    displayDoubleLinkedList(list); // [100, 18, 16, 14, 12, 200, 10, 8, 6, 4, 2, 0]
    getSizeDoubleLinkedList(list); // 12

    addNodeToTail(list, createNode(300));
    displayDoubleLinkedList(list); // [100, 18, 16, 14, 12, 200, 10, 8, 6, 4, 2, 0, 300]
    getSizeDoubleLinkedList(list); // 13

    ListNode *node = getNodeByIndex(list, 5);
    printf("%d\n", node->value); // 200

    removeNodeByIndex(list, 5);
    displayDoubleLinkedList(list); // [100, 18, 16, 14, 12, 10, 8, 6, 4, 2, 0, 300]

    removeHeadNode(list);
    displayDoubleLinkedList(list); // [18, 16, 14, 12, 10, 8, 6, 4, 2, 0, 300]

    removeTailNode(list);
    displayDoubleLinkedList(list); // [18, 16, 14, 12, 10, 8, 6, 4, 2, 0]

    clearDoubleLinkedList(list);
    displayDoubleLinkedList(list); // []

    distroyDoubleLinkedList(list);
    
    return 0;
}

