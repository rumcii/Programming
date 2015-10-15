/*Напишете програма, която проверява дали дадено число n (n < 100) е*/
/*просто.*/

#include <stdio.h>

int isPrime(int);

main()
{
    int n;
    
    printf("\nEnter number: ");
    scanf("%d", &n);
    
    if (isPrime(n)) {
        printf("\nNumer is prime.\n\n");
    }
    else {
        printf("\nNumber is not prime.\n\n");
    }
}

int isPrime(int n)
{
    int counter = 2;
    
    while (counter < n) {
        if (n % counter++ == 0) {
            return 0;
        }
    }
    return 1;
}
