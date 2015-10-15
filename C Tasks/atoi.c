//From string to integer

#include <stdio.h>

#define MAXLINE 1000

int atoi(char []);
int charLine(char [], int);
int isDigit(char);
int isLetter(char);
int isOther(char);
int isSpace(char);

main()
{
    char line[MAXLINE];
    int i = 0;
    
    while (charLine(line, MAXLINE) > 0) {
        printf("%d\n", atoi(line));
        printf("%d\n", isOther(line[i++])); 
    }
}

int charLine(char arr[], int length)
{
    int i = 0;
    int c;
    
    while (i < (length - 1) && (c = getchar()) != EOF && c != '\n') {
        arr[i++] = c;
    }
    
    if (c == '\n') {
        arr[i++] = c;
    }
    
    arr[i] = '\0';
    
    return i;
}

int isDigit(char n)
{
    if (n >= '0' && n <= '9') {
        return 1;
    }
    
    return 0;
}

int isSpace(char n)
{
    if (n == ' ' || n == '\n' || n == '\t') {
        return 1;
    }
    
    return 0;
}

int isLetter(char n)
{
    if (n >= 'a' && n <= 'z' || n >= 'A' && n <= 'Z') {
        return 1;
    }
    
    return 0;
}

int isOther(char n)
{
    if (!isDigit(n) && !isLetter(n) && !isSpace(n) && n != '.' && n != '-') {
        return 1;
    }
    
    return 0;
}

int atoi(char arr[])
{
    int result = 0;
    int i = 0;
    for (i = 0; isLetter(arr[i]) || isSpace(arr[i]) || isOther(arr[i]); i++) {
        ;
    }
    for (result = 0; arr[i] != '\0'; i++) {
        if (isDigit(arr[i])) {
            result = result * 10 + arr[i] - '0';
            if (!isDigit(arr[i + 1])) {
                break;
            }
        }
    }
    return result;
}

