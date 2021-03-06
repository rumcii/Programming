//line counter

#include <stdio.h>

#define MAXLINE 1000

int lineCount(char [], int);
void copy (char[], char[]);

main()
{
    int len;
    int max = 0;
    char line[MAXLINE];
    char longestLine[MAXLINE];
    
    while ((len = lineCount(line, MAXLINE)) > 0) {
        if (max < len) {
            max = len;
            copy(line, longestLine);
        }
    }
    if (max > 0) {
        printf("%s\n", longestLine);
    }
}

int lineCount(char arr[], int n)
{
    int c;
    int i;
    
    for (i = 0; i < n - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        arr[i] = c;
    }
    if ( c == '\n') {
        arr[i] = c;
        i++;
    }
    arr[i] = '\0';
    //printf("%d", i);
    return i;
}

void copy(char from[], char to[]) {
    int i = 0;
    
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
