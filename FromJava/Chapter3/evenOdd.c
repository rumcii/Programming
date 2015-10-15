//Check even or odd number

#include <stdio.h>

int evenOdd(int);

int main()
{
    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    if (evenOdd(n)) {
        printf("\nNumber is even.\n\n");
    }
    else {
        printf("\nNumber is odd.\n\n");
    }
}

int evenOdd(int n)
{
    if (n == 1) {
        return 0;
    }
    else if(n < 0) {
        printf("\nWrong number.\n\n");
        return;
    }
    else if(n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
