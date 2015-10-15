#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "mobile.h"

void MobileConst(struct Mobile*);
void BatteryConstructor(struct Battery*);
void DisplayConstructor(struct Display*);
void MobileFullConstructor(struct Mobile*, char*, char*, char*, int, struct Battery*, struct Display*);
void MobileConstructor(struct Mobile*, char*, char*, char*, int);
void BatteryFullConstructor(struct Battery*, char*, int, int);
void DisplayFullConstructor(struct Display*, float, int);



struct Battery {
    char model[10];
    int talkTime;
    int idleTime;
};

struct Display {
    float size;
    int colors;
};


void BatteryConstructor(struct Battery *battery)
{
    strcpy(battery -> model, "no model");
    battery -> talkTime = 0;
    battery -> idleTime = 0;
}

void DisplayConstructor(struct Display *display)
{
    display -> colors = 0;
    display -> size = 0;
}


