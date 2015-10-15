//Searching for the pattern of letters "ould" in the set of lines

#include <stdio.h>

#define MAXLINE 1000

int getLine(char [], int);
int strindex(char [], char []);

char pattern[] = "ould";

main()
{
    char line [MAXLINE];
    int found = 0;
    
    while (getLine(line, MAXLINE) > 0) {
        if (strindex(line, pattern) >= 0) {
            printf("%s\n", line);
            found++;
        }
    }
    return found;
}

int getLine(char s[], int length)
{
    int c;
    int i = 0;
    
    while (--length > 0 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = '\n';
    }
    s[i] = '\0';
    
    return i;
}

int strindex(char s[], char t[])
{
    int i;
    int j;
    int k;
    
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
            ;
        }
        if (k > 0 && t[k] == '\0') {
            return i;
        }
    }
    
    return -1;
}
