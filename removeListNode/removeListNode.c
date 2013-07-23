/**
 * Title : Remove list nodes containing a given integer value
 *
 * Input : Singly linked list containing an integer value.
 * Task  : Remove all nodes containing a given integer value.
 * Output: Print the resulting list.
 *
 * Credit: Arden Dertat (http://bit.ly/removeListNode)
**/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

void removeListNode(Node *head, int rmVal) {
    /* 1. remove leading nodes containing search value */
    while (head != NULL && head->val == rmVal) {
        Node *tmp = head;
        head = head->next;
        free(tmp);
    }

    /* 2. if the list is empty after (1) above, we're done */
    if (head == NULL) return;

    /**
     * 3. walk through the list and delete any remaining nodes containing the
     *    search value. Note that, at this point, head points to a node that
     *    does NOT contain the search value. We have to only check if 
     *    head->next (if it exists) contains the search value.
    **/
    Node *current = head;
    while (current->next != NULL) {
        if (current->next->val == rmVal) {
            /* next node contains search value; delete it */
            Node *tmp = current->next;
            current->next = tmp->next;
            free(tmp);
        } else {
            current = current->next;
        }
    }
}

void printList(Node *head) {
    if (head == NULL) {
        printf("list is empty\n");
        return;
    }

    Node *current = head;
    do {
        printf("%d ", current->val);
        current = current->next;
    } while (current != NULL);
}

int main(void) {
    /* read test cases and call solution */
    removeListNode(NULL, 5);
    printList(NULL);
}
