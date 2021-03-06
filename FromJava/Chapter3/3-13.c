#include <stdio.h>

int primeNumber(int);

main()
{
    int number;
    
    printf("\nEnter number: ");
    scanf("%d", &number);
    
    if (primeNumber(number))
        printf("\nNumber is prime.\n\n");
    else
        printf("\nNumber is not prime.\n\n");
}

int primeNumber(int n)
{
    int count = 2;
    
    if (n == 1)
        return 0;
    
    while (count < n) {
        if (n % count++ == 0)
            return 0;
    }
    return 1;
}
