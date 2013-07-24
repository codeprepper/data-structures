/**
 * problem:
 *      check if a given string (strC) is interleaved from two other given
 *      strings (strA and strB).
 * examples:
 *      ab cd acbd  (interleaved)
 *      ab cd abcde (not interleaved, extra e)
 *      ab cd abd   (not interleaved, missing c)
 * input: 
 *      strA strB strC
 * output:
 *      true (interleaved)
 *      false (not interleaved)
 * complexity:
 *      time: O(m+n); where m and n are lengths of the two strings
 *      space: O(1); since we don't use any extra space
**/

#include "test.h"

bool isInterleaved(char *strA, char *strB, char *strC) {
    /* if any input string is empty, return false */
    if (*strC == 0) return false;

    while (*strC != 0) {
        if (*strC == *strA) strA++;         /* strA[0] == strC[0], incr. them*/
        else if (*strC == *strB) strB++;    /* strB[0] == strC[0], incr. them */
        else return false;                  /* extra chars in strC */
        strC++;                             /* strA[0] or strB[0] matched */
    }

    /* if we have not reached the end of strA or strB, strC is shorter. */
    return (*strA || *strB) ? false : true;
}
