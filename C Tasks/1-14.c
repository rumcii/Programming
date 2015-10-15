/*Exercise 1-14. Write a program to print a histogram of the frequencies of different characters*/
/*in its input.*/

#include <stdio.h>

#define INTCHARS 128

main()
{
    int c;
    int chars[INTCHARS];
    int i;
    
    for (c = 0; c < INTCHARS; c++) {
        chars[c] = 0;
    }
    
    printf("Enter some text and press ctrl + D:\n");
    while ((c = getchar()) != EOF) {
        chars[c]++;
    }
    
    for (c = 0; c < INTCHARS; c++) {
        if (chars[c] > 0) {
            if (c == '\n') {
                printf("\\n");
            }
            else if (c == ' ') {
                printf("\\b");
            }
            else if ( c == '\t') {
                printf("\\t");
            }
            else {
                printf("%2c", c);
            }
            printf(" (%3d):\t(%d) ", c, chars[c]);
            for (i = 0; i < chars[c]; i++) {
                printf("*");
            }
            printf("\n");
        }
    }
}
