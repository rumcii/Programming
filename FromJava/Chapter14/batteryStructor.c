#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Battery {
    char model[10];
    int talkTime;
    int idleTime;
} ;

struct Battery* newBattery() 
{
    struct Battery *temp = (struct Battery*)malloc(sizeof(struct Battery));
    strcpy(temp -> model, "");
    temp -> talkTime = 0;
    temp -> idleTime = 0;
    
    return temp;
}

struct Battery* fullBattery(char *model, int n, int m)
{
    struct Battery *temp = (struct Battery*)malloc(sizeof(struct Battery));
    strcpy(temp -> model, model);
    temp -> idleTime = m;
    temp -> talkTime = n;
    
    return temp;
}

void setModel(struct Battery *temp, char *model)
{
    strcpy(temp -> model, model);
}

void setTalkTime(struct Battery *temp, int n)
{
    temp -> talkTime = n;
}

void setIdleTime(struct Battery, int n)
{
    temp -> idkleTime = n;
}

char
