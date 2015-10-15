/*8. Дефинирайте клас, който съдържа информация за мобилен телефон:*/
/*модел, производител, цена, собственик, характеристики на батерията*/
/*(модел, idle time и часове разговор /hours talk/) и характеристики на*/
/*екрана (големина и цветове).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Battery {
    char model[10];
    //Talk time and idle time in hours
    int idleTime;
    int talkTime;
} bat;

typedef struct Display {
    //Size in inch
    float size;
    int colors;
} disp;

typedef struct GSM {
    char brand[10];
    char model[10];
    float price;
    char owner[20];
    bat *battery;
    disp *display;
} gsm;



/*9. Декларирайте няколко конструктора за всеки от създадените класове от*/
/*предходната задача, които имат различни списъци с параметри (за*/
/*цялостната информация за даден студент или част от нея). Данните за*/
/*полетата, които не са известни трябва да се инициализират съответно*/
/*със стойности с null или 0.*/
void batteryConstructor(bat*);
void displayConstructor(disp*);
void gsmConstructor(struct GSM*);
void batteryFullConstructor(bat*, char*, int, int);
void displayFullConstructor(disp*, float, int);
void gsmFullConstructor(struct GSM*, char*, char*, float, char*);

/*11. Дефинирайте свойства, за да капсулирате данните в класовете GSM,*/
/*Battery и Display.*/

void setGsmBrand(gsm*, char*);
void setGsmModel(gsm*, char*);
void setGsmPrice(gsm*, float);
void setGsmOwner(gsm*, char*);
void setBatteryModel(bat*, char*);
void setBatteryIdle(bat*, int);
void setBatteryTalk(bat*, int);
void setDisplaySize(disp*, float);
void setDisplayColor(disp*, int);

/*12. Напишете клас GSMTest, който тества функционалностите на класа GSM.*/
/*Създайте няколко обекта от дадения клас и ги запазете в масив.*/
/*Изведете информация за създадените обекти.*/

void printIinfo(struct GSM*);

void createGsmArray(struct GSM*, int);
void resizeGsm(struct GSM*, int);

/*13. Създайте клас Call, който съдържа информация за разговор, осъщес-*/
/*твен през мобилен телефон. Той трябва да съдържа информация за*/
/*датата, времето на започване и продължителността на разговора.*/

typedef struct Call {
    char data[11];
    char startTime[6];
    char duration[6];
} call;

void makeCall(call*);
void makeFullCall(call*, char*, char*, char*);

/*14. Добавете свойство архив с обажданията – callHistory, което да пази*/
/*списък от осъществените разговори.*/

void arrCall(call*, int);
void resizeCall(call*, int);
call* callHistory(call*);

/*15. В класа GSM добавете методи за добавяне и изтриване на обаждания*/
/*(Call) в архива с обаждания на мобилния телефон. Добавете метод,*/
/*който изтрива всички обаждания от архива.*/

/*16. В класа GSM добавете метод, който пресмята общата сума на обажда-*/
/*нията (Call) от архива с обаждания на телефона (callHistory) като нека*/
/*цената за едно обаждане се подава като параметър на метода.*/

/*17. Създайте клас GSMCallHistoryTest, с който да се тества функционал-*/
/*ността на класа GSM, от задача 12, като обект от тип GSM. След това, към*/
/*него добавете няколко обаждания (Call). Изведете информация за*/
/*всяко едно от обажданията. Ако допуснем, че цената за минута разговор*/
/*е 0.37, пресметнете и отпечатайте общата цена на разговорите.*/
/*Премахнете най-дългият разговор от архива с обаждания и пресметнете*/
/*общата цена за всички разговори отново. Най-накрая изтрийте архива*/
/*с обаждания.*/

int capacity = 3;
int add = 0;

main()
{
    bat *battery;
    disp *display;
    struct GSM gsm;
    printf("%ld\n", sizeof(gsm));
    int i;
    
    struct GSM *gsmArr;
    
    createGsmArray(gsmArr, capacity);
    printf("%ld\n", sizeof(gsmArr));
    for (i = 0; i < 3; i++) {
/*        if (add == capacity) {*/
/*            resize(gsmArr, add);*/
/*        }*/
        batteryConstructor(battery);
        displayConstructor(display);
        gsmConstructor(&gsm);
        gsm.battery = battery;
        gsm.display = display;
        
        gsmArr[i] = gsm;
        add++;
    }
    
    for (i = 0; i < add; i++) {
        printIinfo(&gsmArr[i]);
        printf("\n\n");
    }
}

void batteryConstructor(bat *battery)
{
    strcpy(battery -> model, "no name");
    battery -> idleTime = 0;
    battery -> talkTime = 0;
}

void batteryFullConstructor(bat* battery, char *model, int idleTime, int talkTime)
{
    strcpy(battery -> model, model);
    battery -> idleTime = idleTime;
    battery -> talkTime = talkTime;
}

void gsmConstructor(struct GSM *gsm)
{
    strcpy(gsm -> brand, "no name");
    strcpy(gsm -> model, "no name");
    strcpy(gsm -> owner, "no name");
    gsm -> price = 0;
}

void gsmFullConstructor(struct GSM *gsm, char *brand, char *model, float price, char *owner)
{
    strcpy(gsm -> brand, brand);
    strcpy(gsm -> model, model);
    strcpy(gsm -> owner, owner);
    gsm -> price = price;
}

void displayConstructor(disp *display)
{
    display -> size = 0;
    display -> colors = 0;
}

void displayFullConstructor(disp *display, float size, int colors)
{
    display -> size = size;
    display -> colors = colors;
}

void printIinfo(struct GSM *gsm)
{
    printf("\n%s %s\n", gsm -> brand, gsm -> model);
    printf("%f\n%s\n", gsm -> price, gsm -> owner);
    printf("Battery info:\n");
    printf("Model: %s\nIdle time: %d\nTalk time: %d\n", gsm -> battery -> model, gsm -> battery -> idleTime, gsm -> battery -> talkTime);
    printf("Display parameters:\n");
    printf("Size: %f\nColors: %d\n\n", gsm -> display -> size, gsm -> display -> colors);
}

void createGsmArray(struct GSM *gsm, int capacity)
{
    struct GSM *temp = (struct GSM*)malloc(capacity * sizeof(struct GSM));
    gsm = temp;
    free(temp);
}

void resize(struct GSM *gsm, int n)
{
    capacity = capacity * 2 + 1;
    
    struct GSM *temp = (struct GSM*)malloc(capacity * sizeof(struct GSM));
    
    int i;
    
    for (i = 0; i < n; i++) {
        temp[i] = gsm[i];
    }
    gsm = temp;
    
    free(temp);
}
