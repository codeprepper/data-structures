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
 * function: longestPalindrome
 * description: for a given string 'str' return the longest palindrome string
 *              that is its subset.
**/
void longestPalindrome(char *str, char *palindrome) {
    /* 1. check input arguments and initialize them if necessary */



    /* 2. check if each position in str is the center of a palindrome */



    /* 3. Handle case for odd-length palindrome */



    /* 4. Handle case for even-length palindrome (hint: it has 2 centers} */



    /* 5. copy longest found palindrome to the output buffer 'palindrome' */

}
