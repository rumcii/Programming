/*Verify Prime Number*/

/*Given a number, verify whether its prime or not*/

#include <stdio.h>

int verifyNumber(int);

int main()
{
    int a;
    
    printf("N = ");
    scanf("%d", &a);
    
    if (verifyNumber(a)) {
        printf("PRIME\n");
    }
    else {
        printf("NOT PRIME\n");
    }
    return 0;
}

int verifyNumber(int a)
{
    int count = 2;
    
    if (a < 2) {
        return 0;
    }
    
    while (count < a) {
        if (a % count == 0) {
            return -1;
        }
        count++;
    }
    return 1;
}
