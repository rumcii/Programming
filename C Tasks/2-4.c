/*Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in*/
/*s1 that matches any character in the string s2 .*/

#include <stdio.h>

void checkChar();

char arr1[100];
char arr2[100];

main()
{
    int i;
    int c;
    printf("First array:\n");
    for (i = 0; (c = getchar()) != EOF; i++) {
        arr1[i] = c;
    }
    arr1[i] = '\0';
    printf("Second array:\n");
    for (i = 0; (c = getchar()) != EOF; i++) {
        arr2[i] = c;
    }
    arr2[i] = '\0';
    
    checkChar();
}

void checkChar()
{
    int i;
    int j;
    int x = 0;
    int state = 1;
    
    for (i = 0; arr1[i] != '\0'; i++) {
        for (j = 0; arr2[j] != '\0';j++) {
            if (arr1[i] == arr2[j]) {
                state = 0;
            }
        }
        if (state == 1) {
            arr1[x++] = arr1[i];
        }
        state = 1;
    }
    arr1[x] = '\0';
    printf("%s\n", arr1);
}
