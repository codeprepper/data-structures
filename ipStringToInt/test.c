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
            unsigned int ip;
            ip = ipStringToInt(token);
            printf("%u", ip);
        }
        printf ("\n");
    }
}
