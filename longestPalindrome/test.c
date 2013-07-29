#include "test.h"

#define MAXLINE 100
#define DELIMITERS " \n\t"

int main(void) {
    char str[MAXLINE], *token, palindrome[100];

    while (fgets(str, MAXLINE, stdin) != NULL) {
        for (token = strtok(str, DELIMITERS);
             token != NULL;
             token = strtok(NULL, DELIMITERS))
        {
            longestPalindrome(token, palindrome);
            printf("%s", palindrome);
        }
        printf("\n");
    }
}
