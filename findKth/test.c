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
    Node *head, *kth;
    int  k, start;

    /* line format: <delete-val> val1 val2 val3 .. */
    while (fgets(str, 100, stdin) != NULL) {
        head = NULL;
        start = 1;
        for (token = strtok(str, " \n\t");
             token != NULL;
             token = strtok(NULL, " \n\t"))
        {
            /* read delete-val first */
            if (start) {
                k = atoi(token);
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

        /* remove nodes containing k, print resulting list and cleanup */
        kth = findKth(head, k);
        if (kth != NULL) { printf("%d", kth->val); }
        destroyList(&head);
        printf ("\n");
    }
}
