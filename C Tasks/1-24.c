/*Exercise 1-24. Write a program to check a C program for rudimentary syntax errors like*/
/*unmatched parentheses, brackets and braces. Don't forget about quotes, both single and*/
/*double, escape sequences, and comments. (This program is hard if you do it in full generality.)*/

#include <stdio.h>

#define MAXLINE 1000

void checkSingleQuotes();
void checkDoubleQuotes();
void checkParenthesses();
void checkBrackets();
void checkBraces();
void setArray();

char arr[MAXLINE];
int n = 1;

main()
{
    setArray();
    checkBraces();
    checkBrackets();
    checkParenthesses();
    checkDoubleQuotes();
    checkSingleQuotes();
    
    return 0;
}

void setArray()
{
    int c;
    int i = 0;
    
    while ((c = getchar()) != EOF) {
        arr[i] = c;
        i++;
    }
    arr[i] = '\0';
}

void checkSingleQuotes()
{
    int i;
    
    int quotesCount = 0;
    
    for (i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == '\'') {
            quotesCount++;
        }
    }
    if (quotesCount % 2 != 0){
        printf("There is a missing single qoute.\n");
    }
}

void checkDoubleQuotes()
{
    int i;
    int quotesCount = 0;
    
    for (i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == '"') {
            quotesCount++;
        }
    }
    if (quotesCount % 2 != 0) {
        printf("There is a missing double quotes.\n");
    }
}

void checkBraces ()
{
    int i;
    int count = 0;
    
    for (i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == '{') {
            count ++;
        }
        else if (arr[i] == '}') {
            count--;
        }
    }
    if (count < 0) {
        printf("There is missing open braces.\n");
    }
    else if (count > 0) {
        printf("There is missing close braces.\n");
    }
}

void checkBrackets()
{
    int i;
    int count = 0;
    
    for (i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == '[') {
            count ++;
        }
        else if (arr[i] == ']') {
            count--;
        }
    }
    if (count < 0) {
        printf("There is missing open bracket.\n");
    }
    else if (count > 0) {
        printf("There is missing close bracket.\n");
    }
}

void checkParenthesses()
{
    int i;
    int count = 0;
    
    for (i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == '(') {
            count ++;
        }
        else if (arr[i] == ')') {
            count--;
        }
    }
    if (count < 0) {
        printf("There is missing open parentheses.\n");
    }
    else if (count > 0) {
        printf("There is missing close parentheses.\n");
    }
}
