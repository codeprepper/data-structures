/**
 * problem:
 *    Find the kth to last node in a singly linked list in O(N).
 *    NOTE: k = 0 returns the last node.
 * examples:
 *    2, 1->2->3->4->5  => 4    (find 2nd to last)
 *    7, 1->2->3->4->5  => NULL (k is larger than list length)
 * complexity:
 *      time = O(N),  traverse the original linked list once.
 *      space = O(1), a few extra bytes used to store node pointers.
**/

#include "test.h"

/*
typedef struct Node {
    int data;
    struct Node *next;
} Node;
*/

Node * findKth(Node *head, int k) {
    /* 1. check input arguments */



    /**
     * 2. use two node pointers: ptr and kth. Traverse list with ptr. Set kth
     * to head when ptr has moved forward k positions and move it ahead in
     * every iteration until we reach the end of the list.
    **/



    /* 3. return the kth node */


}
