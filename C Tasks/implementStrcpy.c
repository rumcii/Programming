/*Problem statement*/
/*strcpy in C copies the string in one character array to another array. Write your own implementation of this function.*/

/*Input*/
/*You need to write the body of function with signature: void myStrCpy(char *src,char *dest); where src is pointer to the source and dest is pointer to the destination array.*/

/*Output*/
/*Your function must copy the string from source to destination array.*/

#include <stdio.h>

void myStrcpy(char *, char *);

int main()
{
    char name[20];
    char arr[20];
    
    printf("Enter name :");
    scanf("%19s", name);
    printf("Enter arr: ");
    scanf("%19s", arr);
    
    myStrcpy(name, arr);
    
    int i;
    
    for (i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    
    printf("\n%s\n", arr);
    
    return 0;
}

void myStrcpy(char from[], char to[])
{
    int i;
    int j;
    
    for(i = 0; to[i] != '\0'; i++) {
        ;
    }
    
    for (j = 0; from[j] != '\0'; i++, j++) {
        to[i] = from[j];
    }
    
    to[i] = '\0';
    
    //return to;
}

