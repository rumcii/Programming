#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mobileStructures.h"

void DisplayConstructor(struct Display*);
void DisplayFullConstructor(struct Display*, double, int);
struct Display* makeDisplay(double, int);
void PrintDisplay(struct Display*);
void setDisplaySize(struct Display*, double);
void setDisplayColors(struct Display*, int);
double getDisplaySize(struct Display*);
int getDisplayColors(struct Display*);

void DisplayConstructor(struct Display *display)
{
    display -> colors = 0;
    display -> size = 0;
}

void DisplayFullConstructor(struct Display *display, double size1, int colors1)
{
    display -> size = size1;
    display -> colors = colors1;
}

struct Display* makeDisplay(double size, int colors)
{
    struct Display *temp = (struct Display*)malloc(sizeof(struct Display));
    temp -> size = size;
    temp -> colors = colors;
    
    return temp;
}

void PrintDisplay(struct Display *display)
{
    printf("\tDisplay info:\n");
    printf("Display size: %.1f\nDisplay colors: %d\n", display -> size, display -> colors);
}

void setDisplaySize(struct Display *display, double size)
{
    display -> size = size;
}

void setDisplayColors(struct Display *display, int colors)
{
    display -> colors = colors;
}

double getDisplaySize(struct Display *display)
{
    return display -> size;
}

int getDisplayColors(struct Display *display)
{
    return display -> colors;
}


