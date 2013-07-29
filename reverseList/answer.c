/**
 * problem:
 *      Reverse a singly linked list.
 * examples:
 *      1 => 1                      (single node)
 *      1 -> 2 => 2 -> 1            (two nodes)
 *      1 -> 2 -> 3 => 3 -> 2 -> 1  (multiple nodes)
 *
 * complexity:
 *      time = O(N)
 *      space = O(1)
**/

#include "test.h"

/*
typedef struct Node {
    int data;
    struct Node *next;
} Node;
*/

/**
 * Create a new list by popping nodes from the given list and inserting it at
 * the beginning of the new list.
**/
void reverseList(Node **head) {
    /* check input args */
    if (*head == NULL) { return; }

    /* Using space: O(1) */
    Node *newList, *tmp;

    /**
     * newList is a new list. Pop nodes from orig list and insert them at the
     * beginning of the new list
    **/
    newList = NULL;
    while (*head != NULL) {
        tmp = *head;
        *head = (*head)->next;
        tmp->next = newList;
        newList = tmp;
    }

    *head = newList;
}

/**
 * Alternative O(1) solution:
 * For a given node, change its next pointer to point to the prev node.
 * Advance head and prevNode until you reach the end of the list. The final
 * value of prevNode is the head of the reversed list.
**/
void reverseList2(Node **head) {
    /* check input args */
    if (*head == NULL) { return; }

    /* Using space O(1) */
    Node *prevNode, *tmp;   /* this is the only extra space used */

    prevNode = NULL;
    while (*head != NULL) {
        tmp = *head;
        *head = (*head)->next;
        tmp->next = prevNode;
        prevNode = tmp;
    }

    *head = prevNode;

}
