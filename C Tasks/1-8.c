/*Exercise 1-8. Write a program to count blanks, tabs, and newlines.*/

#include <stdio.h>

main()
{
    int newLine = 0;
    int tab = 0;
    int blank = 0;
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++newLine;
        } else if (c == '\t') {
            ++tab;
        } else if (c == ' ') {
            ++blank;
        }
    }
    
    printf("Blanks: %d\nTabs: %d\nNew lines: %d\n", blank, tab, newLine);
    return 0;
}
