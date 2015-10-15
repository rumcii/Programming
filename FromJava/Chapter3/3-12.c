/*Дадено е число n, стойност v (v = 0 или 1) и позиция p. Напишете*/
/*поредица от операции, които да променят стойността на n, така че битът*/
/*на позиция p да има стойност v. Пример n=35, p=5, v=0 -> n=3. Още*/
/*един пример: n=35, p=2, v=1 -> n=39.*/

#include <stdio.h>

#define MAXLINE 100

void toBinary(int);
int toInteger(char*);
void bitChange(int, int);
int power(int, int);

char binNumber[MAXLINE];

main()
{
    int number;
    
    printf("Enter some number: ");
    scanf("%d", &number);
    
    toBinary(number);
    
    printf("\n%s\n\n", binNumber);
    
    printf("Number is: %d\n\n", toInteger(binNumber));
    
    bitChange(1, 2);
    
    printf("New number is: %d\n\n", toInteger(binNumber));
}

void toBinary(int number)
{
    int i = 0;
    int j;
    int digit;
    
    while (number != 0) {
        digit = number % 2;
        
        binNumber[i++] = digit + '0';
        
        number = number / 2;
    }
    
    binNumber[i] = '\0';
    
    for (j = 0; binNumber[j] != '\0'; j++) {
        ;
    }
    
    char temp;
    
    for (i = 0, j = j - 1; i < j; i++, j--) {
        temp = binNumber[i];
        binNumber[i] = binNumber[j];
        binNumber[j] = temp;
    }
}

int power(int n, int p)
{
    int result = 1;
    
    if (p == 0 && n != 0)
        return 1;
    else if (p == 1)
        return n;
    else if (n == 0)
        return 0;
    
    while (p != 0) {
        result *= n;
        p--;
    }
    return result;
}

int toInteger(char arr[])
{
    int i;
    int p = 0;
    int result = 0;
    
    for (i = 0; arr[i + 1] != '\0'; i++)
        ;
    
    while (i >= 0) {
        result += (power(2 * (arr[i--] - '0'), p++));
    }
    
    return result;
}

void bitChange(int bit, int position)
{
    int i;
    
    for (i = 0; binNumber[i + 1] != '\0'; i++)
        ;
    
    if (position > i) {
        printf("\nWrong position!\n\n");
    }
    else {
        binNumber[position] = bit;
    }
}
