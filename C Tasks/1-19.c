/*Exercise 1-19. Write a function reverse(s) that reverses the character string s . Use it to*/
/*write a program that reverses its input a line at a time.*/

#include <stdio.h>

#define MAXLINE 100

void stringReverse(char[]);

int count = 0;

main()
{
    int c;
    int i = 0;
    
    char list[MAXLINE];
    while ((c = getchar()) != EOF) {
        list[i] = c;
        count++;
        i++;
    }
    stringReverse(list);
    return 0;
}

void stringReverse(char list[])
{
    int i = 0;
    char arr[MAXLINE];
    //printf("%d", count);
    while (count - 1 >= 0) {
        arr[i] = list[count - 1];
        count--;
        i++;
        //printf("%c", arr[i]);
    }
    printf("%s\n\n", arr);
}
