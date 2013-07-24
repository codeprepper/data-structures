/**
 * problem: Remove all nodes from a linked-list containing a given integer
 *          value
 * claim to fame: ability to write bug-free code.
 * complexity: time = O(N); space = O(1)
**/

#include "test.h"

void printList(Node *head) {
    if (head == NULL) {
        printf("empty list");
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

    /* line format: <delete-val> val1 val2 val3 .. */
    while (fgets(str, 100, stdin) != NULL) {
        head = NULL;
        for (token = strtok(str, " \n\t");
             token != NULL;
             token = strtok(NULL, " \n\t"))
        {
            /* create list node from value */
            //printf("%d ", atoi(token));
            Node *node;
            node = (Node *)malloc(sizeof(Node));
            node->val = atoi(token);
            node->next = NULL;

            /* append list node to existing list pointed to by 'head' */
            appendToList(&head, node);
        }

        /* find mid-point */
        listMidPoint(head);
        destroyList(&head);
    }
}
