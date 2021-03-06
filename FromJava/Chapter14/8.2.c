/*8. Дефинирайте клас, който съдържа информация за мобилен телефон:*/
/*модел, производител, цена, собственик, характеристики на батерията*/
/*(модел, idle time и часове разговор /hours talk/) и характеристики на*/
/*екрана (големина и цветове).*/
/*9. Декларирайте няколко конструктора за всеки от създадените класове от*/
/*предходната задача, които имат различни списъци с параметри (за*/
/*цялостната информация за даден студент или част от нея). Данните за*/
/*полетата, които не са известни трябва да се инициализират съответно*/
/*със стойности с null или 0.*/

/*11. Дефинирайте свойства, за да капсулирате данните в класовете GSM,*/
/*Battery и Display.*/
/*12. Напишете клас GSMTest, който тества функционалностите на класа GSM.*/
/*Създайте няколко обекта от дадения клас и ги запазете в масив.*/
/*Изведете информация за създадените обекти. Изведете информация за*/
/*статичното поле nokiaN95.*/
/*13. Създайте клас Call, който съдържа информация за разговор, осъщес-*/
/*твен през мобилен телефон. Той трябва да съдържа информация за*/
/*датата, времето на започване и продължителността на разговора.*/
/*14. Добавете свойство архив с обажданията – callHistory, което да пази*/
/*списък от осъществените разговори.*/
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Battery {
    char model[10];
    //Idle time in hours.
    int idleTime;
    //Talk time in hours.
    int talkTime;
} bat;

typedef struct Display {
    //Display size in inches.
    float size;
    int colors;
} disp;

typedef struct GSM {
    char brand[10];
    char model[10];
    char owner[20];
    float price;
    bat *battery;
    disp *display;
} gsm;

typedef struct Call {
    char data[10];
    char startTime[7];
    char duration[7];
} call;

gsm* makeGSM();
bat* makeBattery();
disp* makeDisplay();
void printIinfo(gsm*);
gsm* mobileArr(int);
void resizeMobile(gsm*, int);
void addToCall(call*)
call* makeCall(char*, char*, char*);

int capacity = 2;
int mobileCount = 0;
int callCount = 0;
call *callHistory = ;

main()
{
    char name[20];
    char gsmModel[10];
    char gsmBrand[10];
    float gsmPrice;
    
    char batteryModel[10];
    int idleTime;
    int talkTime;
    
    float size;
    int colors;
    
    gsm *mobiles = mobileArr(capacity);
/*    gsm *mobile;*/
/*    bat *battery;*/
/*    disp *display;*/
    
    int i;
    int n;
    
    printf("Enter number of mobile phones: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        if (mobileCount == capacity) {
            resizeMobile(mobi
les, capacity);
        }
        
        printf("Enter name: ");
        scanf("%19s", name);
        printf("Enter gsm model: ");
        scanf("%9s", gsmModel);
        printf("Enter gsm brand: ");
        scanf("%9s", gsmBrand);
        printf("Enter gsm price: ");
        scanf("%f", &gsmPrice);
        printf("Enter battery model: ");
        scanf("%9s", batteryModel);
        printf("Enter battery talk time: ");
        scanf("%d", &talkTime);
        printf("Enter battery idle time: ");
        scanf("%d", &idleTime);
        printf("Enter display size: ");
        scanf("%f", &size);
        printf("Enter display colors: ");
        scanf("%d", &colors);
        
        bat *battery = makeBattery();
        disp *display = makeDisplay();
        gsm *mobile = makeGSM();
        printf("a\n");
        strcpy(battery -> model, batteryModel);
        printf("%s", battery -> model);
        strcpy(mobile -> owner, name);
        strcpy(mobile -> brand, gsmBrand);
        strcpy(mobile -> model, gsmModel);
        printf("b\n");
        mobile ->price = gsmPrice;
        
        battery -> idleTime = idleTime;
        battery -> talkTime = talkTime;
        
        display -> size = size;
        display -> colors = colors;
        
        mobile -> battery = battery;
        mobile -> display = display;
        
        mobiles[i] = *mobile;
        mobileCount++;
    }
    for (i = 0; i < mobileCount; i++) {
    printIinfo(&mobiles[i]);
    }
}

void printIinfo(gsm *mobile)
{
    printf("\n%s %s\n", mobile->brand, mobile -> model);
    printf("Owner: %s\n", mobile -> owner);
    printf("Price: %.2f\n", mobile -> price);
    printf("\nBattery info:\n");
    printf("Type: %s\n", mobile -> battery -> model);
    printf("Talk time(in hours): %d\n", mobile -> battery -> talkTime);
    printf("Idle time(in hours): %d\n", mobile -> battery -> idleTime);
    printf("\nDisplay info:\n");
    printf("Display colors: %d", mobile -> display -> colors);
    printf("\nDisplay size(in inches): %.2f\n", mobile -> display -> size);
    printf("\n\n");
}

gsm* mobileArr(int n)
{
    gsm *newArr = (gsm*)malloc(n * sizeof(gsm));
    
    return newArr;
}

void resizeMobile(gsm *mobile, int n)
{
    n = n * 2 + 1;
    
    gsm* temp = (gsm*)malloc(n * sizeof(gsm));
    
    int i;
    
    for (i = 0; i < mobileCount; i++) {
        temp[i] = mobile[i];
    }
    
    mobile = temp;
    free(temp);
}

bat* makeBattery()
{
    bat *temp = (bat*)malloc(sizeof(bat));
    
/*    strcpy(temp -> model, "no model");*/
/*    temp -> talkTime = 0;*/
/*    temp -> idleTime = 0;*/
/*    */
    return temp;
}

disp* makeDisplay()
{
    disp *temp = (disp*)malloc(sizeof(disp));
    
    return temp;
}

gsm* makeGSM()
{
    gsm *temp = (gsm*)malloc(sizeof(gsm));
    
    return temp;
}

call* makeCall(char data[], char startTime[], duration[])
{
    call *temp = (call*)malloc(sizeof(call));
    
    strcpy(temp -> data, data);
    strcpy(temp -> startTime, startTime);
    strcpy(temp -> duration, duration);
    
    return temp;
}

void addToCall(call*)
{
    
}
