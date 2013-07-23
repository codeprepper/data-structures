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
#include <string.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

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

void printList(Node *head) {
    if (head == NULL) {
        printf("list is empty");
        return;
    }

    Node *current = head;
    do {
        printf("%d ", current->val);
        current = current->next;
    } while (current != NULL);
}

void appendToList(Node **head, Node *node) {
    if (node == NULL) { return; }
    node->next = NULL;

    /* if the list is empty; this is the first node */
    if (*head == NULL) {
        *head = node;
        return;
    }

    /* walk to the end of the list */
    Node *tmp = *head;
    while (tmp->next != NULL) { tmp = tmp->next; }
        
    /* tmp is pointing to the last node in the list */
    tmp->next = node;
}

void destroyList(Node **head) {
    while (*head != NULL) {
        Node *tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
}

int main(void) {
    char str[100], *token;
    Node *head;
    int  rval, start;

    /* line format: <delete-val> val1 val2 val3 .. */
    while (fgets(str, 100, stdin) != NULL) {
        head = NULL;
        start = 1;
        for (token = strtok(str, " ");
             token != NULL;
             token = strtok(NULL, " "))
        {
            /* read delete-val first */
            if (start) {
                rval = atoi(token);
                start = 0;
                continue;
            }

            /* create list node from value */
            //printf("%d ", atoi(token));
            Node *node;
            node = (Node *)malloc(sizeof(Node));
            node->val = atoi(token);
            node->next = NULL;

            /* append list node to existing list pointed to by 'head' */
            appendToList(&head, node);
        }

        /* remove nodes containing rval, print resulting list and cleanup */
        removeListNode(&head, rval);
        printList(head); printf("\n");
        destroyList(head);
    }
}
