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
**/

#include "test.h"

#define MAXLINE 100
#define DELIMITERS " \n\t"

int main(void) {
    char str[MAXLINE], *token;
    char strArray[3][MAXLINE];
    int  idx;

    while (fgets(str, MAXLINE, stdin) != NULL) {
        char *pos = *strArray;
        bzero(pos, 3*MAXLINE);
        for (token = strtok(str, DELIMITERS);
             token != NULL;
             token = strtok(NULL, DELIMITERS))
        {
            memcpy(pos, token, MAXLINE);
            pos += MAXLINE;
        }

        isInterleaved(strArray[0], strArray[1], strArray[2]) ?
            printf("interleaved\n") :
            printf("not interleaved\n");
    }
}
