/*адача 4 - По-голямата последна цифра.*/

/*Във файл, който се казва `bigger_last_digit.py`, напишете програма, която:*/

/** Чете две цели числа от потребителя - `n` и `m`*/
/** На екрана извежда числото, което има по-голяма последна цифра от двете.*/
/** Ако последните цифри за равни, на екрана се извежда по-голямото число.*/

/*Например:*/

/** Ако имаме `n = 1000` и `m = 9`, то резултатът на програмата е `m`, тъй като последната цифра на `n` е 0, а на `m` е 9 и 9 > 0.*/
/** Aко имаме `n = 199` и `m = 99`, то резултатът е `199` - по-голямото число.*/

/***Подсказка***/

/*Колко е остатъка при деление на едно цяло число с 10?*/

#include <stdio.h>

main()
{
	int firstNumber;
	int secondNumber;
	
	printf("Enter first number: ");
	scanf("%d", &firstNumber);
	printf("Enter second number: ");
	scanf("%d", &secondNumber);
	
	int lastDigit1 = firstNumber % 10;
	int lastDigit2 = secondNumber % 10;
	
	if (lastDigit1 > lastDigit2)
		printf("%d\n", firstNumber);
	else if (lastDigit2 > lastDigit1)
		printf("%d\n", secondNumber);
	else {
		if (firstNumber > secondNumber)
			printf("%d\n", firstNumber);
		else if (secondNumber > firstNumber)
			printf("%d\n", secondNumber);
		else
			printf("The numbers are equals.\n");
	}
}
