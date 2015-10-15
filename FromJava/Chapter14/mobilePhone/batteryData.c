#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mobileStructures.h"

void BatteryConstructor(struct Battery*);
void BatteryFullConstructor(struct Battery*, char*, int, int);
char* getBatterybatteryModel(struct Battery*);
int getBatteryIdleTime(struct Battery*);
int getBatteryTalkTime(struct Battery*);
void setBatterybatteryModel(struct Battery*, char*);
void setBatteryIdleTime(struct Battery*, int);
void setBatteryTalkTime(struct Battery*, int);
struct Battery* makeBattery(char*, int, int);
void PrintBattery(struct Battery*);

void BatteryConstructor(struct Battery *battery)
{
    strcpy(battery -> batteryModel, "no batteryModel");
    battery -> talkTime = 0;
    battery -> idleTime = 0;
}

void BatteryFullConstructor(struct Battery *battery, char batteryModel[], int talkTime, int idleTime)
{
    strcpy(battery -> batteryModel, batteryModel);
    battery -> talkTime = talkTime;
    battery -> idleTime = idleTime;
}

struct Battery* makeBattery(char batteryModel[], int talkTime, int idleTime)
{
    struct Battery *temp = (struct Battery*)malloc(sizeof(struct Battery));
    strcpy(temp -> batteryModel, batteryModel);
    temp -> idleTime - idleTime;
    temp -> talkTime = talkTime;
    return temp;
}

void PrintBattery(struct Battery *battery)
{
    printf("\n\tBattery info:\n");
    printf("Battery batteryModel: %s\n", battery -> batteryModel);
    printf("Battery talk time: %d\n", battery -> talkTime);
    printf("Battery idle time: %d\n\n", battery -> idleTime);
}

char* getBatterybatteryModel(struct Battery *battery)
{
    return battery -> batteryModel;
}

int getBatteryIdleTime(struct Battery *battery)
{
    return battery -> idleTime;
}

int getBatteryTalkTime(struct Battery *battery)
{
    return battery -> talkTime;
}

void setBatteryIdleTime(struct Battery *battery, int idleTime)
{
    battery -> idleTime = idleTime;
}

void setBatteryTalkTime(struct Battery *battery, int talkTime)
{
    battery -> talkTime = talkTime;
}

void setBatterybatteryModel(struct Battery *battery, char batteryModel[])
{
    strcpy(battery -> batteryModel, batteryModel);
}
