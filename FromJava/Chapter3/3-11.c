/*Дадено е число n и позиция p. Напишете поредица от операции, които*/
/*да отпечатат стойността на бита на позиция p от числото n (0 или 1).*/
/*Пример: n=35, p=5 -> 1. Още един пример: n=35, p=6 -> 0.*/

#include <stdio.h>

void toBinary(int);
int position(int);

char binary[10];

main()
{
    int n;
    int m;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    toBinary(n);
    
    printf("\n%s\n", binary);
    
    printf("Enter position: ");
    scanf("%d", &m);
    
    printf("Digit of position %d is: %d\n", m, position(m));
}

void toBinary(int n)
{
    int digit;
    int i = 0;
    
    while (n != 0) {
        digit = n % 2;
        
        binary[i++] = digit + '0';
        
        n = n / 2;
    }
    binary[i] = '\0';
    
    int j;
    
    for (j = 0; binary[j] != '\0'; j++) {
        ;
    }
    
    char temp;
    
    j--;
    
    for (i = 0; i < j; i++, j--) {
        temp = binary[i];
        binary[i] = binary[j];
        binary[j] = temp;
    }
}

int position(int n)
{
    int i = binary[n - 1] - '0';
    return i;
}
