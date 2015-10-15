#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mobileStructures.h"
/*#include "batteryData.c"*/
/*#include "displayData.c"*/

void MobileConst(struct Mobile*);
void MobileFullConstructor(struct Mobile*, char*, char*, char*, double, struct Battery*, struct Display*);
void MobileConstructor(struct Mobile*, char*, char*, char*, double);
struct Mobile* makeMobile(char*, char*, char*, double, struct Battery*, struct Display*);
void PrintMobile(struct Mobile*);
char* getMobileBrand(struct Mobile*);
char* getMobileModel(struct Mobile*);
char* getMobileOwner(struct Mobile*);
double getMobilePrice(struct Mobile*);
struct Battery* getMobileBattery(struct Mobile*);
struct Display* getMobileDisplay(struct Mobile*);
void setMobileBrand(struct Mobile*, char*);
void setMobileModel(struct Mobile*, char*);
void setMobileOwner(struct Mobile*, char*);
void setMobilePrice(struct Mobile*, double);
void setMobileBattery(struct Mobile*, struct Battery*);
void setMobileDisplay(struct Mobile*, struct Display*);


/*struct Mobile {*/
/*    char brand[10];*/
/*    char model[10];*/
/*    char owner[20];*/
/*    int price;*/
/*    struct Battery*;*/
/*    struct Display*;*/
/*};*/

void MobileConst(struct Mobile *mobile)
{
    strcpy(mobile -> brand, "no brand");
    strcpy(mobile -> model, "no model");
    strcpy(mobile -> owner, "no name");
    mobile -> price = 0;
}

void MobileConstructor(struct Mobile *mobile, char brand[], char model[], char owner[], double price)
{
    strcpy(mobile -> brand, brand);
    strcpy(mobile -> model, model);
    strcpy(mobile -> owner, owner);
    mobile -> price = price;
}

void MobileFullConstructor(struct Mobile *mobile, char brand[], char model[], char owner[], double price, struct Battery *battery, struct Display *display)
{
    strcpy(mobile -> brand, brand);
    strcpy(mobile -> model, model);
    strcpy(mobile -> owner, owner);
    mobile -> price = price;
    mobile -> battery = battery;
    mobile -> display = display;
}

struct Mobile* makeMobile(char brand[], char model[], char owner[], double price, struct Battery *battery, struct Display *display)
{
    struct Mobile *temp = (struct Mobile*)malloc(sizeof(struct Mobile));
    strcpy(temp -> brand, brand);
    strcpy(temp -> model, model);
    strcpy(temp -> owner, owner);
    temp -> price = price;
    temp -> battery = battery;
    temp -> display = display;
    
    return temp;
}

void PrintMobile(struct Mobile *mobile)
{
    printf("\tMobile phone info:\n");
    printf("Mobile phone brand: %s\n", mobile -> brand);
    printf("Mobile phone model: %s\n", mobile -> model);
    printf("Mobile phone owner: %s\n", mobile -> owner);
    printf("Mobile phone price: %.2f\n", mobile -> price);
    //printf("\n\tBattery info:\n");
    PrintBattery(mobile -> battery);
    //printf("\n\tDisplay info:");
    PrintDisplay(mobile -> display);
}

char* getMobileBrand(struct Mobile *mobile)
{
    return mobile -> brand;
}

char* getMobileModel(struct Mobile *mobile)
{
    return mobile -> model;
}

char* getMobileOwner(struct Mobile *mobile)
{
    return mobile -> owner;
}

double getMobilePrice(struct Mobile *mobile)
{
    return mobile -> price;
}

struct Battery* getMobileBattery(struct Mobile *mobile)
{
    return mobile -> battery;
}

struct Display* getMobileDisplay(struct Mobile *mobile)
{
    return mobile -> display;
}

void setMobileBrand(struct Mobile *mobile, char brand[])
{
    strcpy(mobile -> brand, brand);
}

void setMobileModel(struct Mobile *mobile, char model[])
{
    strcpy(mobile -> model, model);
}

void setMobileOwner(struct Mobile *mobile, char owner[])
{
    strcpy(mobile -> owner, owner);
}

void setMobilePrice(struct Mobile *mobile, double price)
{
    mobile -> price = price;
}

void setMobileBattery(struct Mobile *mobile, struct Battery *battery)
{
    mobile -> battery = battery;
}

void setMobileDisplay(struct Mobile *mobile, struct Display *display)
{
    mobile -> display = display;
}
