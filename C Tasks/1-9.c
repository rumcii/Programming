/*Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or*/
/*more blanks by a single blank.*/

#include <stdio.h>

main()
{
    int c;
    int blankCount = 0;
    
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            blankCount = 0;
        } 
        if (c ==  ' ' && blankCount == 0) {
            putchar(c);
            ++blankCount;
        }
    }
    return 0;
}
