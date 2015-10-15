//Count digits, white spaces, others.

#include <stdio.h>

main()
{
    int c;
    int i;
    int digits[10];
    int whiteSpaces = 0;
    int others = 0;

    for (i = 0; i < 10; i++) {
        digits[i] = 0;
    }
    
    while ((c = getchar()) != EOF) {
        if (c >= '0' || c <= '9') {
            ++digits[c - '0'];
        }
        else if ( c == ' ' || c == '\n' || c == '\t') {
            ++whiteSpaces;
        }
        else {
            ++others;
        }
    }
    printf("Digits are: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", digits[i]);
    }
    printf("\nWhite spaces: %d\n", whiteSpaces);
    printf("Others: %d\n", others);
    
    return 0;
}
