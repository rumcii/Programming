/*Фирма, занимаваща се с маркетинг, иска да пази запис с данни на*/
/*нейните служители. Всеки запис трябва да има следната характеристика*/
/*– първо име, фамилия, възраст, пол (м или ж), ID номер и уникален*/
/*номер на служителя (27560000 до 27569999). Декларирайте*/
/*необходимите променливи, нужни за да се запази информацията за*/
/*един служител, като използвате подходящи типове данни и описателни*/
/*имена.*/

#include <stdio.h>
#include <string.h>

#define MAXLINE 100

struct ID {
    char *firstName;
    char *lastName;
    int age;
    char *sex;
    int ID;
    int uniqueNumber;
};

void Print();

    struct ID employee;

main()
{
    char firstName[MAXLINE];
    char lastName[MAXLINE];
    int age;
    char sex[2];
    int ID;
    int uniqueNumber;
    
    printf("\nEnter your first name and last name: ");
    scanf("%s %s", firstName, lastName);
    
    printf("\nEnter your age: ");
    scanf("%d", &age);
    
    printf("\nEnter your sex(M or F): ");
    scanf("%s", sex);
    
    printf("\nEnter ID: ");
    scanf("%d", &ID);
    
    printf("\nEnter unique number(27560000 до 27569999): ");
    scanf("%d", &uniqueNumber);
    
    employee.firstName = firstName;
    employee.lastName = lastName;
    employee.age = age;
    employee.sex = sex;
    employee.ID = ID;
    employee.uniqueNumber = uniqueNumber;
    
    Print();
}

void Print()
{
    printf("\n%s %s\n", employee.firstName, employee.lastName);
    printf("Age: %d", employee.age);
    printf("\n%s\n", employee.sex);
    printf("ID: %d", employee.ID);
    printf("\nUnique number: %d\n\n", employee.uniqueNumber);
}
