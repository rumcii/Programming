/*Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into*/
/*visible escape sequences like \n and \t as it copies the string t to s . Use a switch . Write a*/
/*function for the other direction as well, converting escape sequences into the real characters.*/

#include <stdio.h>

char * escape(char [], char []);

main()
{
    int i = 0;
    int c;
    char arr[50];
    char arr1[50];
    
    while ((c = getchar()) != EOF) {
        arr[i++] = c;
    }
    arr[i] = '\0';
    printf("%s\n", escape(arr1, arr));
}

char * escape(char s[], char t[])
{
    int i = 0;
    int index = 0;
    
    while (t[i] != '\0') {
        switch (t[i]) {
            case '\n':
                s[i + index++] = '\\';
                //index++;
                s[i + index] = 'n';
                break;
            case '\t':
                s[i + index++] = '\\';
                //index++;
                s[i + index] = 't';
                break;
            default:
                s[i + index] = t[i];
                break;
        }
        i++;
    }
    s[i + index] = '\0';
    return s;
}
