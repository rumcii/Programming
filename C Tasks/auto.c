/*The Person class represents the owner of the car and has:*/

/*firstName*/
/*lastName*/
/*age*/
/*The Auto class represents a car and has:*/

/*owner (Person)*/
/*maxSpeed*/
/*brand*/
/*name*/
/*price*/
/*Define toString method to both classes and print them.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    char firstName[10];
    char lastName[10];
    int age;
} person;

typedef struct Auto {
    person owner;
    int maxSpeed;
    char brand[10];
    char name[10];
} autostr;

void printPerson(person);
void printAuto(autostr);

main()
{
    char firstName[10];
    char lastName[10];
    int age;
    int maxSpeed;
    char brand[10];
    char name[10];
    
    printf("Enter your data: ");
    scanf("%9s %9s %d", firstName, lastName, &age);
    
    printf("Enter auto data: ");
    scanf("%9s %9s %d", brand, name, &maxSpeed);
    
    person rumen;
    autostr Ford;
    
    strcpy(rumen.firstName, firstName);
    strcpy(rumen.lastName, lastName);
    rumen.age = age;
    
    strcpy(Ford.brand, brand);
    strcpy(Ford.name, name);
    Ford.maxSpeed = maxSpeed;
    Ford.owner = rumen;

    printPerson(rumen);
    printAuto(Ford);
}

void printPerson(person person)
{
    printf("%s\t%s\t%d\n", person.firstName, person.lastName, person.age);
}

void printAuto(autostr Auto)
{
    printPerson(Auto.owner);
    printf("%d\t%s\t%s\n", Auto.maxSpeed, Auto.brand, Auto.name);
}

