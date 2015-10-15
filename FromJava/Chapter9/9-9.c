/*Напишете програма, която решава следните задачи:*/
/*- Обръща последователността на цифрите на едно число.*/
/*- Пресмята средното аритметично на дадена редица.*/
/*- Решава линейното уравнение a * x + b = 0.*/
/*Създайте подходящи методи за всяка една от задачите.*/
/*Напишете програмата така, че на потребителя да му бъде изведено*/
/*текстово меню, от което да избира коя задача да решава.*/
/*Направете проверка на входните данни:*/
/*- Десетичното число трябва да е неотрицателно.*/
/*- Редицата не трябва да е празна.*/
/*- Коефициентът a не трябва да е 0*/

#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 100

int reverseNumber(int);
float averag(int*);
float linearEquation(int, int);
int checkDecimalNumber(int);
int checkLine(int*);
int checkA(int);
int* makeArray(int);
int menu();

int count = 0;

main()
{
    int n;
    
    menu();
    
    scanf("%d", &n);
    
    if (n == 1) {
        int m;
        printf("Enter number: ");
        scanf("%d", &m);
        
        if (checkDecimalNumber(m)) {
            printf("\nResult is: %d\n\n", reverseNumber(m));
        }
    }
    else if (n == 2) {
        int counter;
        int m;
        
        int *numbers = makeArray(MAXLINE);
        
        printf("\nHow many numbers you want to add to array? ");
        scanf("%d", &counter);
        
        while (counter > 0) {
            printf("Enter number: ");
            scanf("%d", &m);
            
            numbers[count++] = m;
            counter--;
        }
        
        if (checkLine(numbers)) {
            printf("\nResult is: %.2f\n\n", averag(numbers));
        }
    }
    else if (n == 3) {
        int a;
        int b;
        
        printf("\nEnter first parameter: ");
        scanf("%d", &a);
        printf("Enter second parameter: ");
        scanf("%d", &b);
        
        if (checkA(a)) {
            printf("\nResult is: %.2f\n\n", linearEquation(a, b));
        }
    }
}

int checkDecimalNumber(int n)
{
    if (n < 0) {
        printf("Wrong number. Try again.\n");
        return 0;
    }
    return 1;
}

int checkLine(int *arr)
{
    int i;
    
    for (i = 0; i < count; i++) {
        ;
    }
    if (i == 0) {
        printf("Empty list. Add numbers.\n");
        return 0;
    }
    return 1;
}

int checkA(int n)
{
    if (n == 0) {
        printf("Wrong number. Try again.\n");
        return 0;
    }
    return 1;
}

int reverseNumber(int n)
{
    int digit;
    int result = 0;
    
    while (n != 0) {
        digit = n % 10;
        result = result * 10 + digit;
        n = n / 10;
    }
    return result;
}

float averag(int *arr)
{
    float result;
    int i;
    
    for (i = 0; i < count; i++) {
        result += arr[i];
    }
    return result / (float)count;
}

float linearEquation(int a, int b)
{
    return -b / a;
}

int* makeArray(int n)
{
    int *arr = (int*)malloc(n * sizeof(int));
    
    return arr;
}


int menu()
{
    printf("\nИзберете задача:\n");
    printf("\n1: Обръща последователността на цифрите на едно число.\n");
    printf("2: Пресмята средното аритметично на дадена редица.\n");
    printf("3: Решава линейното уравнение a * x + b = 0.\n");
}
