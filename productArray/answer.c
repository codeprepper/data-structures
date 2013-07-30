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
    if (A == NULL || N == 0) { return; }

    /**
     * construct the following temp arrays:
     * L: in which each element is the product of all elements PRIOR to it
     * R: in which each element is the product of all elements AFTER it
     * Each element in B is then the product of the elements at the same index
     * in L and R.
    **/
    int *L, *R, pos;

    L = (int *)malloc(N * sizeof(int));
    R = (int *)malloc(N * sizeof(int));

    if (L == NULL || R == NULL) { return; /* malloc failure */ }

    /* initialize the L array, note that the first element is 1 */
    for (L[0] = 1, pos = 1; pos < N; pos++) {
        L[pos] = L[pos-1] * A[pos-1]; }

    /* initialize the R array, note that the last element is 1 */
    for (R[N-1] = 1, pos = N-2; pos >= 0; pos--) {
        R[pos] = R[pos+1] * A[pos+1]; }

    /* print the product array */
    for (pos = 0; pos < N; pos++) { printf("%d ", L[pos] * R[pos]); }

    /* cleanup */
    if (L) { free(L); }
    if (R) { free(R); }
}
