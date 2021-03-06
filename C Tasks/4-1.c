/*Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost*/
/*occurrence of t in s , or -1 if there is none.*/

#include <stdio.h>

#define MAXLINE 1000

int getLine1(char [], int);
int strindex(char [], char []);

char pattern[] = "haha";

main()
{
    char line[MAXLINE];
    int found = 0;
    
    while (getLine1(line, MAXLINE) > 0) {
        if (strindex(line, pattern) >= 0) {
            printf("%s%d\n", line, strindex(line, pattern));
            found++;
        }
    }
    printf("%d\n\n", found);
    
    return 0;
}

int getLine1(char arr[], int length)
{
    int c;
    int i = 0;
    
    while (i < (length - 1) && (c = getchar()) != EOF && c != '\n') {
        arr[i++] = c;
    }
    
    if (c == '\n') {
        arr[i++] = '\n';
    }
    
    arr[i] = '\0';
    
    return i;
}

int strindex (char s[], char t[])
{
    int i;
    int j;
    int k;
    
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
            ;
        }
        if (k > 0 && t[k] == '\0') {
            return --j;
        }
    }
    return -1;
}
