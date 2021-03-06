/*Coffee Machine*/
/*Coffee[] brandsOfCoffee - an array for Coffee. One coffee machine can hold up to 10 brands of coffee.*/
/*float balance - the current money balance in the coffee machine.*/
/*And the following methods:*/

/*Create method for adding Coffee in the machine - public boolean addCoffee(Coffee coffee). The method should return true if you can add that coffee type to the machine. Otherwise, return false (more than 10 cups are added)*/
/*Create method for buying Coffee from the Coffee Machine public float buyCoffee(String brand, float price). This method recieves coffee brand and money given by the buyer. If the coffee brand exsists in brandsOfCoffee - return the change. If it doesn't - return -1. The amounts of coffee we can buy, for now, is unlimited.*/

#include <stdio.h>
#include <string.h>

int capacity = 0;
int total = 0;

typedef struct coffee {
    char brand[10];
    float price;
} Coffee;

typedef struct coffeeMachine {
    Coffee coffee[5];
    float balance;
} machine;

main()
{
    machine myMachine;
    
    myMachine.balance = 0;
    
    int i;
    char name[10];
    float price;
    float givingchange;
    float pay;
    int choose;
    int c;
    
    for (i = 0; i < 5; i++) {
        printf("\nEnter brand of coffee: ");
        scanf("%9s", name);
        printf("Enter price for coffee: ");
        scanf("%f", &price);
        
        strcpy(myMachine.coffee[i].brand, name);
        myMachine.coffee[i].price = price;
    }
    
    printf("\nChoose coffee:\n");
    for (i = 0; i < 5; i++) {
        printf("%d: %s\t%.2f\n", i + 1, myMachine.coffee[i].brand, myMachine.coffee[i].price);
    }

    while ((c = getchar()) != EOF) {
        printf("\nInsert your money: ");
        scanf("%f", &pay);
        
        choose = c - '0';
        
/*        printf("\nYour choise is: ");*/
/*        scanf("%d", &choose);*/
        
        switch (choose) {
            case 1: case 2: case 3: case 4: case 5:
                if (pay < myMachine.coffee[choose - 1].price) {
                    printf("\nNot enought money.\n");
                }
                else {
                    givingchange = pay - myMachine.coffee[choose - 1].price;
                    myMachine.balance += myMachine.coffee[choose - 1].price;
                    
                    printf("Your change: %.2f\n", givingchange);
                    printf("Balance: %.2f\n", myMachine.balance);
                }
                break;
                
            default:
                printf("\nWrong choise.\nTry again.\n");
                break;
        }
    }
}
