/*Напишете програма, която генерира и отпечатва всички комбинации с*/
/*повторение на k елемента над n-елементно множество.*/

#include <stdio.h>

void loop(int, int);

int x;

main()
{
    int n;
    int m;
    
    printf("Enter numbers for loop: ");
    scanf("%d %d", &n, &m);
    x = m;
    loop(n, m);
}

void loop(int n, int m)
{
    if (n == 1 && m == 1) {
        return;
    }
    if (m == 1) {
        n--;
        m = x;
    }
    printf("%d   %d\n", n, m);
    loop(n, --m);
}
