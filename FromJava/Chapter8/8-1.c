/*Напишете метод, който при подадено име отпечатва в конзолата "Hello,*/
/*<name>!" (например "Hello, Peter!"). Напишете програма, която тества*/
/*този метод.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 100

char* hello();
int checkHello();
char* makeCharArray(int);

main()
{
    char arr[20] = "Hello ";
    
    char name[10] = "rumen";
    
    int i;
    int j;
    
    for (i = 6, j = 0; name[j] != '\0'; j++, i++) {
        arr[i] = name[j];
    }
    
    hello();
    
    printf("\n%s\n\n", arr);
}

char* makeCharArray(int n)
{
    char *arr = (char*)malloc(n * sizeof(char));
    
    return arr;
}

char* hello()
{
    char *arr = makeCharArray(20);
    
    int i;
    int j;
    
    char name[10];
    
    printf("Enter name: ");
    scanf("%9s", name);
    
    arr = "Hello ";
    
    for (i = 0; arr[i] != '\0'; i++) {
        ;
    }
    
    printf("\n%d\n\n", i);
    
    for (j = 0; name[j] != '\0'; j++) {
        printf("%c", name[j]);
    }
    printf("\n");
    for (j = 0; j < i; j++) {
        printf("%c", arr[j]);
    }
    printf("a");
    for (i = 0, j = 0; name[j] != '\0'; i++, j++) {
        printf("\n%d\t%d\n", i, j);
        printf("\'%c\'   %c\n", arr[i], name[j]);
        arr[i] = name[j];
    }
    
    arr[i] = '\0';
    
    return arr;
}
