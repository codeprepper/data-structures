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

void printArr(int *arr, int len) {
    int i;
    for (i = 0; i < len; i++) { printf("%d ", arr[i]); }
}

int main(void) {
    char str[MAXLINE], *token;

    /* read input lines */
    while (fgets(str, MAXLINE, stdin) != NULL) {

        int *arr = NULL, len, pos = 0;
        bool start = true;

        /* tokenize input line and parse each token */
        for (token = strtok(str, DELIMITERS);
             token != NULL;
             token = strtok(NULL, DELIMITERS))
        {
            /* first token is the array length */
            if (start) {
                len = atoi(token);
                start = false;

                /* allocate mem for arr */
                arr = (int *)malloc(len * sizeof(int));
                if (arr == NULL) { printf("malloc failure!"); exit(-1); }
            }
            /* remaining elements are arr members */
            else { arr[pos++] = atoi(token); }
        }

        // printArr(arr, len);
        productArray(arr, len);
        printf("\n");

        /* cleanup */
        if (arr) { free(arr); arr = NULL; }
    }
}
