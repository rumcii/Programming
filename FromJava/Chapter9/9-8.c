#include <stdio.h>
#include <math.h>

int factorial(int);

main()
{
    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    printf("\n%d\n\n", (factorial(n) * 24));
}

int factorial(int n)
{
    int count = 1;
    int result = 1;
    
    while (count <= n) {
        result *= count++;
    }
    return result;
}
