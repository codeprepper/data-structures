/**
 * problem: Remove all nodes from a linked-list containing a given integer
 *          value
 * claim to fame: ability to write bug-free code.
 * complexity: time = O(N); space = O(1)
 * credits: Arden Dertat (http://bit.ly/removeListNode)
**/

#include "test.h"

/*
typedef struct Node {
    int val;
    struct Node *next;
} Node;
*/

void removeListNode(Node **head, int rval) {
    /* 1. remove leading nodes containing search value */
    while (*head != NULL && (*head)->val == rval) {
        Node *tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }

    /* 2. if the list is empty after (1) above, we're done */
    if (*head == NULL) return;

    /**
     * 3. walk through the list and delete any remaining nodes containing the
     *    search value. Note that, at this point, head points to a node that
     *    does NOT contain the search value. We have to only check if 
     *    head->next (if it exists) contains the search value.
    **/
    Node *current = *head;
    while (current->next != NULL) {
        if (current->next->val == rval) {
            /* next node contains search value; delete it */
            Node *tmp = current->next;
            current->next = tmp->next;
            free(tmp);
        } else {
            current = current->next;
        }
    }
}
