/*Напишете програма, която при въвеждане на коефициентите (a, b и c)*/
/*на квадратно уравнение: ax^2 + bx + c , изчислява и извежда неговите*/
/*реални корени.*/

#include <stdio.h>

int powerOfTwo(int);
int rootOne(int, int, int);
int rootTwo(int, int, int);
int determinant(int, int, int);

main()
{
    int a;
    int b;
    int c;
    
    printf("Enter number for \'a\': ");
    scanf("%d", &a);
    printf("Enter number for \'b\': ");
    scanf("%d", &b);
    printf("Enter number for \'c\': ");
    scanf("%d", &c);
    
    printf("\nYour quadratic equation is: %dx^2 + %dx + %d\n\n", a, b, c);
}

int powerOfTwo(int n)
{
    return n * n;
}

int determinant(int a, int b, int c)
{
    return powerOfTwo(b) - (4 * a * c);
}

int rootOne(int )
