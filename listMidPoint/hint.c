/**
 * problem:
 *      find the mid-point of a singly linked list
 * examples:
 *      1->2->3->4->5 => 3
 *      1->2->3->4->5->6 => 3 4 (two mid-points in lists with even nodes)
 * input: 
 *      list head pointer
 * output:
 *      value at mid-point(s)
 *      "empty" if list is empty
 * complexity:
 *      time = O(N)
 *      space = O(1)
**/

#include "test.h"

/* 
typedef struct Node {
    int val;
    struct Node *next;
} Node;
*/

void listMidPoint(Node *head) {
    /* 1. handle empty list case */



    /**
     * 2. Two pointers, slow and fast. slow takes 1 step at a time, fast takes
     *    two. When we have reached the end of the list, slow points to the
     *    mid-point.
    **/



    /* 3. handle case of lists with even no. of nodes */
}
