/*Задача 1 - Трите имена*/

/*В файл, който се казва `names.py`, напишете програма, която:*/

/** Чете от потребител **първото** му име*/
/** Чете от потребител **второто** му име*/
/** Чете от потребител **третото** му име*/

/*Изкарва на екрана пълното му име, разделено с 1 шпация между 3те отделни имена.*/

/*Примерно използване:*/

/*```*/
/*First name? Radoslav*/
/*Second name? Yordanov*/
/*Third name? Georgiev*/
/*Radoslav Yordanov Georgiev*/
/*```*/

#include <stdio.h>

main()
{
	char cFirstName[10];
	char cSecondName[10];
	char cThirdName[10];
	
	printf("\nEnter your first name: ");
	scanf("%9s", cFirstName);
	printf("Enter your second name: ");
	scanf("%9s", cSecondName);
	printf("Enter your third name: ");
	scanf("%9s", cThirdName);
	
	printf("\nYour three names are: %s %s %s\n", cFirstName, cSecondName, cThirdName);
}
