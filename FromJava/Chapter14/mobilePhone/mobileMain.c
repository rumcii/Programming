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
/*нията (Call) отcom архива с обаждания на телефона (callHistory) като нека*/
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
//#include <string.h>
#include "mobileStructures.h"
/*#include "mobileData.c"*/
/*#include "batteryData.c"*/
/*#include "displayData.c"*/

main()
{
/*    struct Battery battery;*/
/*    */
/*    BatteryFullConstructor(&battery, "BL-4j", 10, 50);*/
/*    */
/*    struct Display display;*/
/*    */
/*    DisplayFullConstructor(&display, 3.5, 256000);*/
/*    printf("%.2f\t%d\n", display.size, display.colors);*/
/*    struct Mobile mobile;*/
/*    */
/*    MobileConstructor(&mobile, "Nokia", "C6-00", "Rumen", "12.2");*/
/*    printf("%f\n", mobile.price);*/
/*    mobile.price = 12.2;*/
/*    mobile.battery = &battery;*/
/*    mobile.display = &display;*/
/*    */
/*    PrintMobile(&mobile);*/
    
    struct Mobile mobileArr[3];
    
    int i;
    
    char batteryModel[10];
    int talkTime;
    int idleTime;
    
    float displaySize;
    int displayColors;
    
    char mobileModel[10];
    char mobileBrand[10];
    char mobileOwner[10];
    double price;
    
    struct Battery *battery;
    
    for (i = 0; i < 3; i++) {
        printf("Enter mobile brand: ");
        scanf("%9s", mobileBrand);
        printf("Enter moobile model: ");
        scanf("%9s", mobileModel);
        printf("Enter mobile owner: ");
        scanf("%9s", mobileOwner);
        printf("Enter mobile price: ");
        scnaf("%f", &price);
        
        printf("Enter batterey model: ");
        scanf("%9s", batteryModel);
        printf("Enter battery talkTime: ");
        scanf("%d", &talkTime);
        printf("Enter battery idleTime: ");
        scanf("%d", &idleTime);
        
        pritf("Enter display size: ");
        scanf("%f", &displaySize);
        printf("Enter display colors: ");
        scanf("%d", &displayColors);
        
        battery = makeBattery(batteryModel, talkTime, idleTime);
        struct Display *display = makeDisplay(displaySize, displayColors);
        struct Mobile *mobile = makeMobile(mobileBrand, mobileModel, mobileOwner, price, battery, display);
        mobileArr[i] = *mobile;
    }
}
