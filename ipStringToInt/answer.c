/**
 * problem:
 *      Convert an IP address in string format to a 4-byte integer.
 * examples:
 *     "192.168.1.101"   => 3232235877
 *     "255.255.255.255" => 4294967295
 *     "300.168.1.101"   => 0 (invalid)
 * complexity:
 *      time  = O(N), have to traverse entire string
 *      space = O(1), constant extra space required
**/

#include "test.h"           /* don't remove this line */

#define MAX_IP_STRLEN 15    /* xxx.xxx.xxx.xxx */

unsigned int ipStringToInt(char *str) {
    /* 1. check input arguments */
    if (str == NULL || strlen(str) > MAX_IP_STRLEN) { return 0; }

    char *pch;
    unsigned int ip, count;

    for (ip = 0, count = 0, pch = strtok(str, ".");
         pch != NULL;
         pch = strtok(NULL, "."))
    {
        if (count >= 4) { return 0; }
        int tmp = atoi(pch);
        if (tmp < 0 || tmp > 255) { return 0; }
        ip = (ip << 8) | tmp;
        count ++;
    }

    return (count == 4) ? ip : 0;
}
