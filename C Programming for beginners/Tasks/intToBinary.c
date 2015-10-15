// Convert integer number to binary number

#include <stdio.h>

main()
{
    char binary[10];
    int digit;
    int result = 0;
    int number;
    int i;
    int j;

    printf("\nEnter number: ");
    scanf("%d", &number);

    for (i = 0; i < 10; i++) {
        binary[i] = 0;
    }
    i = 9;

    while ( number != 0 ) {
        
        digit = number % 2;

        binary[i] = digit;

        number = number / 2;
        --i;
        //printf("%d", i);
    }

    for (j = 0; j < 10; j ++) {
        result = result * 10 + binary[j];
        //printf("%d", binary[j]);
    }
    printf("\n%d\n\n", result);
}