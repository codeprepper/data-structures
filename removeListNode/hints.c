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



    /* 2. if the list is empty after (1) above, we're done */



    /**
     * 3. walk through the list and delete any remaining nodes containing the
     *    search value. Note that, at this point, head points to a node that
     *    does NOT contain the search value. We have to only check if 
     *    head->next (if it exists) contains the search value.
    **/


}
