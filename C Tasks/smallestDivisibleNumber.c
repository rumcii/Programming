/*Problem statement*/
/*Given a number X, find the smallest number that will be divisible by all numbers from 1 till X.*/

#include <stdio.h>

int smallestDivideNumber(int);

int main()
{
    int number;
    
    printf("Enter number: ");
    scanf("%d", &number);
    
    printf("\n%d\n\n", smallestDivideNumber(number));
}

int smallestDivideNumber(int n)
{
    int counter = 2;
    int number = n;
    
    if (n < 5) {
        while (1) {
            if (number % counter == 0) {
                counter++;
            }
            else {
                number++;
                counter = 2;
            }
            if (counter > n) {
                return number;
            }
        }
    }
    
    while (counter <= n) {
        if (number % counter == 0) {
            counter++;
        }
        else {
            if (number % 5 == 0) {
                number += 5;
            }
            else {
                number++;
            }
            counter = 2;
        }
    }
    return number;
}
