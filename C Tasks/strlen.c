/*Problem statement*/
/*strlen function gives the size of a string in C. Write your own implementation of strlen function.*/

#include <stdio.h>

#define MAXSIZE 100

int mystrLen(char*);
void getch(char*);

main()
{
    char c[MAXSIZE];
    
    printf("Enter some text: ");
    
    getch(c);
    
    printf("\nSize of string is: %d\n\n", mystrLen(c));
}

int mystrLen(char *arr)
{
    int size = 0;
    int i;
    
    for (i = 0; arr[i] != '\0'; i++) {
        size++;
    }
    
    return size;
}

void getch(char arr[])
{
    int c;
    int i = 0;
    
    while ((c = getchar()) != EOF && c != '\n') {
        arr[i++] = c;
    }
    
    arr[i] = '\0';
}
