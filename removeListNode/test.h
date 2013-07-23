#ifndef _TEST_H_
#define _TEST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int         val;
    struct Node *next;
} Node;

void removeListNode(Node **head, int rval);
void printList(Node *head);
void appendToList(Node **head, Node *node);
void destroyList(Node **head);

#endif /* _TEST_H_ */
