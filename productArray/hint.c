/**
 * problem:
 *      Given an input array A, print the product array B such that each element
 *      in B is the product of all elements in A except the element at the same
 *      index in A. The required time complexity is O(N) and you are NOT
 *      allowed to use the division operator.
 *
 * examples:
 *      [1, 2, 3, 4, 5] => [120, 60, 40, 30, 24]
 *
 * complexity:
 *      time = O(N)
 *      space = O(N)
**/

#include "test.h"

void productArray(int *A, int N) {
    /* check input arguments */


    /**
     * construct the following temp arrays:
     * L: in which each element is the product of all elements PRIOR to it
     * R: in which each element is the product of all elements AFTER it
     * Each element in B is then the product of the elements at the same index
     * in L and R.
    **/



    /* initialize the L array, note that the first element is 1 */



    /* initialize the R array, note that the last element is 1 */



    /* print the product array */



    /* cleanup */
}
