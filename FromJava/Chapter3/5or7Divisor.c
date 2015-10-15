/*Напишете булев израз, който да проверява дали дадено цяло число се*/
/*дели на 5 и на 7 без остатък.*/

#include <stdio.h>

void divisor75(int);

int main()
{
    int n;
    
    printf("\nEnter number: ");
    scanf("%d", &n);
    
    divisor75(n);
}

void divisor75(int n)
{
    if (n % 5 == 0 && n % 7 == 0) {
        printf("\n%d is divide on 5 and 7.\n\n", n);
    }
    else if(n % 5 == 0) {
        printf("\n%d divide only on 5.\n\n", n);
    }
    else if(n % 7 == 0) {
        printf("\n%d is divide only on 7.\n\n", n);
    }
    else {
        printf("\n%d not divide on 5 and 7.\n\n", n);
    }
}
