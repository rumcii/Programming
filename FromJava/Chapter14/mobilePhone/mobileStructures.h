//#include <stdio.h>
//#include <stdlib.h>

struct Battery {
    char batteryModel[10];
    int talkTime;
    int idleTime;
};

struct Display {
    double size;
    int colors;
};

struct Mobile {
    char brand[10];
    char model[10];
    char owner[10];
    double price;
    struct Battery *battery;
    struct Display *display;
};
