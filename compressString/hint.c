/**
 * problem:
 *      Compress a given string by replacing consecutive repeating characters
 *      with the character followed by its frequency. If the resulting string
 *      is longer than the original, return the original string itself.
 * examples:
 *      aaabbbc => a3b3c1
 *      aaaaaa  => a6
 *      aabbcc  => aabbcc (a2b2c2 is not shorter)
 * complexity:
 *      time  = O(N); since we have to iterate the input string once.
 *      space = O(N); output string is the same size as the input string.
**/

#include "test.h"

char *compressString(char *str) {
    /* 1. handle empty string */



    /* 2. create an output buffer of appropriate length */



    /**
     * 3. walk through the string; until the present char is the same as the
     *    previous character, increment a counter; print the character followed
     *    by the counter value to the output buffer.
    **/



    /* 4. if the output string is not shorter than 'str', return str itself */


}
