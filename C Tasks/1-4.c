/*Write a program to print the corresponding Celsius to Fahrenheit table*/

#include <stdio.h>

main()
{
    float celsius;
    float fahr = 0;
    
    for (celsius = 0; celsius < 100; celsius += 20) {
        fahr = (9 * celsius / 5.0) + 32;
        printf("%3.0f\t%3.0f\n", celsius, fahr);
    }
}
