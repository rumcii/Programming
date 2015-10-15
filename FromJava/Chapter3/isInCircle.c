/*Напишете програма, която проверява дали дадена точка О (x, y) е вътре*/
/*в окръжността К ((0,0), 5).*/

#include <stdio.h>
#include <math.h>

float inCircle(float, float);
float square(float);

float r;
float a;
float b;

main()
{
    float x;
    float y;
    
    printf("\nEnter circle center: ");
    scanf("%f %f", &a, &b);
    
    printf("\nEnter circle radius: ");
    scanf("%f", &r);
    
    printf("\nEnter point coordinates: ");
    scanf("%f %f", &x, &y);
    
    if (a == 0 && b == 0) {
        if (inCircle(x, y) > square(r)) {
            printf("\nThe point is outside of the circle.\n\n");
        }
        else {
            printf("\nThe point is inside of the circle.\n\n");
        }
    }
    else {
        if ((a + r) < x || x < (a - r) || (b + r) < y || y < (b - r)) {
            printf("\nThe point if outside of the circle.\n\n");
        }
        else {
            printf("\nThe point is inside of the circle.\n\n");
        }
    }
}

float inCircle(float x, float y)
{
    float c;
    
    c = (float)square(x) + square(y);
    
    return c;
}

float square(float n)
{
    return n * n;
}
