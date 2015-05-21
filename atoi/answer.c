/**
 * problem:
 *      implement atoi() in C/C++
 * examples:
 *      '123'   => 123
 *      '0123'  => 123  (leading 0 dropped)
 *      '0x123' => 0    (treated as string)
 *      'abc'   => 0    (string input)
 *      '-123' => -123  (handle negative numbers)
 *      '112233445566778899' => -1 (num too large)
 *      '+123'  => 123  (handle + sign)
 * complexity:
 *      time = O(N), need to walk through entire string.
 *      space = O(1), constant space required: sizeof(int)
**/

#include "test.h"

bool overflow(int num, int lsd) {
    /* check if addn of the least significant digit won't cause an overflow */
    return (10*num + lsd <= num) ? true : false;
    
}

int my_atoi(char *str) {
    if (str == NULL) { return 0; }

    int num = 0;
    int sign = 1;

    if (*str == '-') { sign = -1; str++; }
    if (*str == '+') { str++; }

    while (*str != 0) {
        if (*str < '0' || *str > '9') { return 0; }
        if (overflow(num, *str - '\0')) { return -1; }
        num = 10*num + (*str - '0');
        str++;
    }

    return sign * num;
}
