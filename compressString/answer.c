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
    /* 1. if the input string is NULL, return NULL */
    if (str == NULL) { return str; }

    /* 2. allocate enough memory for the output string */
    int len;
    char *out;

    len = strlen(str);
    out = (char *) malloc (len * sizeof(char));
    if (out == NULL) {
        printf("malloc failure!\n");
        exit(-1);
    }

    char *pout, *pin, last;
    int count;

    pin = str; pout = out;
    while (*pin) {
        last = *pin; pin++; count = 1;
        while (last == *pin) { count++; pin++; }
        pout += snprintf(pout, len, "%c%d", last, count);
    }

    return strlen(out) < strlen(str) ? out : str;
}
