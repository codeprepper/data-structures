/**
 * problem:
 *      Find the longest palindrome in a given string.
 *
 * examples:
 *      a => a
 *      abba => abba
 *      1abba2          => abba
 *      1abba2abcddcba3 => abcddcba     (longest palindrome)
 *      1abba2dffd3     => abba         (first occurrence in case of conflicts)
 *      aba             => aba          (odd-length palindrome)
 *      1abcba2abba3    => abcba        (longer odd-length palindrome)
 *      abcedfgh        => a            (first palindrome)
 *
 * complexity:
 *      time = O(N^2)
 *      space = O(1)
**/

#include "test.h"       /* don't remove/modify this line */

#define MAXLEN 100      /* given: maxlen of the input string */

/**
 * function: getPalindrome
 * description: probe str by decementing left and incrementing right to get the
 *              longest palindrome and return its start and end positions.
**/
void getPalindrome(char *str, int left, int right, int *start, int *end) {
    while (left >= 0 &&
           right <= strlen(str)-1 &&
           str[left] == str[right])
    {
        left--;
        right++;
    }

    *start = left + 1;
    *end = right - 1;
}

/**
 * function: longestPalindrome
 * description: for a given string 'str' return the longest palindrome string
 *              that is its subset.
**/
void longestPalindrome(char *str, char *palindrome) {
    /* 1. check input arguments */
    if (str == NULL) { return; }

    int maxstart, maxlen;
    int center, start, end, len;

    bzero(palindrome, MAXLEN); /* zero out the output buffer */
    maxstart = 0; maxlen = 1;  /* initial palindrome: first letter */

    /* check if each position in str is the center of a palindrome */
    for (center = 0; center < strlen(str) - 1; center++) {
        /* get for odd-length palindrome */
        getPalindrome(str, center, center, &start, &end);

        /* save info if this is the longest palindrome yet */
        len = end - start + 1;
        if (len > maxlen) {
            maxlen = len;
            maxstart = start;
        }

        /* get for even-length palindrome (hint: it has two centers} */
        if (str[center] == str[center+1]) {
            getPalindrome(str, center, center+1, &start, &end);
            /* save info if this is the longest palindrome yet */
            len = end - start + 1;
            if (len > maxlen) {
                maxlen = len;
                maxstart = start;
            }
        }
    }

    /* copy longest found palindrome to the output buffer */
    strncpy(palindrome, str+maxstart, maxlen);
}
