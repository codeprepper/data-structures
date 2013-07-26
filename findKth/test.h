#ifndef _TEST_H_
#define _TEST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int         val;
    struct Node *next;
} Node;

Node * findKth(Node *head, int k);

#endif /* _TEST_H_ */
