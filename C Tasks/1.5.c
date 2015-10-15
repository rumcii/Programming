/*Exercise 1-5. Modify the temperature conversion program to print the table in reverse order,*/
/*that is, from 300 degrees to 0.*/

#include <stdio.h>

main()
{
    float celsius;
    int fahr;
    
    for (fahr = 300; fahr >= 0; fahr-=20) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3d\t%6.1f\n", fahr, celsius);
    }
}
