/*Напишете израз, който да проверява дали дадено цяло число съдържа*/
/*7 за трета цифра (отдясно на ляво).*/

#include <stdio.h>

int checkDigit(int, int, int);

int main()
{
    int number;
    int digit;
    int position;
    
    printf("\nEnter number: ");
    scanf("%d", &number);
    
    printf("\nEnter searching digit: ");
    scanf("%d", &digit);
    
    printf("\nEnter searching position: ");
    scanf("%d", &position);
    
    if (checkDigit(number, digit, position)) {
        printf("\nNumber found.\n\n");
    }
    else {
        printf("Number not found.\n\n");
    }
}

int checkDigit(int number, int digit, int position)
{
    int counter = 1;
    int d;
    
    while (counter <= position) {
        d = number % 10;
        number = number / 10;
        counter++;
    }
    
    if (d == digit) {
        return 1;
    }
    
    return 0;
}
