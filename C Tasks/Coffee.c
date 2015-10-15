/*Coffee:*/
/*Define attributes for Coffee that have brand and price Think about their types.*/
/*Make several objects of type Coffee and print them.*/
/*Define public String toString() {} for Coffee.*/

/*Coffee Machine*/

/*Coffee[] brandsOfCoffee - an array for Coffee. One coffee machine can hold up to 10 brands of coffee.*/
/*float balance - the current money balance in the coffee machine.*/
/*And the following methods:*/

/*Create method for adding Coffee in the machine - public boolean addCoffee(Coffee coffee). The method should return true if you can add that coffee type to the machine. Otherwise, return false (more than 10 cups are added)*/
/*Create method for buying Coffee from the Coffee Machine public float buyCoffee(String brand, float price). This method recieves coffee brand and money given by the buyer. If the coffee brand exsists in brandsOfCoffee - return the change. If it doesn't - return -1. The amounts of coffee we can buy, for now, is unlimited.*/


#include <stdio.h>
#include <string.h>

typedef struct Coffee {
    char brand[20];
    float price;
    
} coffee;

main()
{
    int i;
    char name[20];
    float price1;
    
    coffee coffee[3];
    
    for (i = 0; i < 3; i++) {
        printf("Enter coffee brand: ");
        scanf("%s[19]", name);
        printf("Enter coffee price: ");
        scanf("%f", &price1);
        
        strcpy(coffee[i].brand, name);
        coffee[i].price = price1;
    }
    
    for (i = 0; i < 3; i++) {
        printf("\nCoffee status: %s\t%2.2f\n", coffee[i].brand, coffee[i].price);
    }
}
