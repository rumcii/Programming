/*Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to*/
/*handle quoted strings and character constants properly. C comments don't nest.*/

#include <stdio.h>

#define MAXLINE 1000

void removeComment();

char arr[MAXLINE];

main()
{
    int c;
    int i = 0;
    
    while ((c = getchar()) != EOF) {
        arr[i] = c;
        i++;
    }
    arr[i] = '\0';
    removeComment();
}

void removeComment()
{
    int i = 0;
    int j = 0;
    char temp[MAXLINE];
    
    while (arr[i] != '\0') {
        if (arr[i] == '/' && arr[i + 1] == '*') {
            printf("1: %d\t%c\n", i, arr[i]);
            i+= 2;
            while (arr[i] != '*' && arr[i + 1] != '/') {
                //temp[j] = '\n';
                i++;
                printf("2: %d\n", i);
            }
            i+= 2;
            printf("3: %d\n", i);
        }
        else if (arr[i] == '/' && arr[i + 1] == '/') {
            while (arr[i] != '\n') {
                temp[j] = '\n';
                i++;
            }
            i++;
        }
        printf("4: %d\t%c\n", i, arr[i]);
        temp[j++] = arr[i++];
    }
    temp[j] = '\0';
    printf("%s\n", temp);
}
