#include <stdio.h>
#include "CircularList.h"

#define TEST_SIZE 10

int main() {
    CircularList *list = createCircularList();

    for (int i = 0; i < TEST_SIZE; i++) {
        addNodeToHead(list, createNode(i * 2));
    }

    displayCircularList(list); // [18, 16, 14, 12, 10, 8, 6, 4, 2, 0]

    addNodeToHead(list, createNode(100));
    displayCircularList(list); // [18, 16, 14, 12, 10, 8, 6, 4, 2, 0, 100]

    addNode(list, createNode(200), 5);
    displayCircularList(list); // [18, 16, 14, 12, 10, 200, 8, 6, 4, 2, 0, 100]

    ListNode *node = getNodeByIndex(list, 5);
    printf("%d\n", node->value); // 200

    removeNodeByIndex(list, 5);
    displayCircularList(list); // [18, 16, 14, 12, 10, 8, 6, 4, 2, 0, 100]

    removeHeadNode(list);
    displayCircularList(list); // [16, 14, 12, 10, 8, 6, 4, 2, 0, 100]

    clearCircularList(list);
    displayCircularList(list); // []

    distroyCircularList(list);
    return 0;
}

