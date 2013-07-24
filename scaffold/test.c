/**
 * problem:
 *
 * examples:
 *
 * input: 
 *
 * output:
 *
 * complexity:
 *      time  = 
 *      space =
**/

#include "test.h"

#define MAXLINE 100
#define DELIMITERS " \n\t"

int main(void) {
    char str[MAXLINE], *token;

    while (fgets(str, MAXLINE, stdin) != NULL) {
        for (token = strtok(str, DELIMITERS);
             token != NULL;
             token = strtok(NULL, DELIMITERS))
        {
            /* process the input line here */
        }

        /* call the test function with args here */
    }
}
