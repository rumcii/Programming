/*Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is*/
/*easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/

#include <stdio.h>

#define IN 1
#define OUT 2

int check(char);

main ()
{
    char c;
    int lengths[10];
    int state = OUT;
    int i;
    //char word[10];
    char allWords[10][10];
    int j = 0;
    //int wordIndex = 0;
    int counter = 0;
    
    for (i = 0; i < 10; i++) {
        lengths[i] = 0;
    }
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            allWords[i][j] = 'q';
        }
    }
    i = 0;
    j = 0;
    while ((c = getchar()) != EOF) {
        if (check(c)) {
            allWords[i][j] = c;
            j++;
            state = IN;
        }
        else {
            j = 0;
            i++;
        }
    }
    //printf("\n%d\n\n", check(c));

    
    for (i = 0; i < 10; i++) {
        counter = 0;

        for (j = 0; j < 10; j++) {
            if (allWords[i][j] != 'q') {
                printf("%c", allWords[i][j]);
                counter++;
            }
            else {
                break;
            }
        }
        if (allWords[i][0] == 'q') {
            break;
        }
        printf("\t:");
        for (j = 0; j < counter; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int check(char a)
{
    char checker[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    
    for (i = 0; i < sizeof(checker); i++) {
        if (a == checker[i]) {
            return 1;
        }
        //printf("\n%c\n", checker[i]);
    }
    return 0;
}
