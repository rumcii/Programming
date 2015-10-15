/*Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the*/
/*length of arbitrary long input lines, and as much as possible of the text.*/

#include <stdio.h>

#define MAXLINE 1000

void getLineLength() ;
void copy();

int lenLine = 1;
int max = 1;
int fullLength = 0;
char line[MAXLINE];
char longestLine[MAXLINE];


main()
{
    while (lenLine > 0) {
        getLineLength();
        if (max < lenLine) {
            max = lenLine;
            copy();
        }
    }
    if (max > 1) {
        printf("Longest line is:\n%s\t- %d\n", longestLine, max);
    }
}

void getLineLength()
{
    int c;
    int i;
    
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
        //printf("%c   %c\n", line[i], c);
    }
    if (i > 06) {
        printf("%s\t- %d\n", line, i + 1);
    }
    
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    
    line[i] = '\0';
    lenLine = i;
}

void copy()
{
    int i = 0;
    
    while ((longestLine[i] = line[i]) != '\0') {
        if (line[i + 1] == '\n') {
            longestLine[i + 1] = '\0';
            break;
        }
        i++;
    }
}
