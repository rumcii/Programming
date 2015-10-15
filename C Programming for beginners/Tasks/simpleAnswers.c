/*Задача 4 - Много прост изкуствен интелект.*/

/*Във файла `simple_answers.py`, напишете програма, която:*/

/*1. Чете от потребителя някакъв текст.*/
/*2. Спрямо това каква дума се среща в текста, отговаря.*/

/*Правилата са следните:*/

/** Ако string-a `"hello"` или думата `"Hello"` се срещат в текста, отговорете с `"Hello there, good stranger!"`*/
/** Ако string-a `"how are you?"` се среща в текста, отговорете с `"I am fine, thanks. How are you?"`*/
/** Ако string-a `"feelings"` се среща в текста, отговорете с `"I am a machine. I have no feelings"`*/
/** Ако string-a `"age"` се среща в текста, отговорете с `"I have no age. Only current timestamp"`*/

/*Ако в текста се среща повече от 1 от думите, за които гледаме, отговорете с това, с което първо проверявате.*/

#include <stdio.h>

main()
{
	char string[50];
	int index = 0;
	int currentIndex = 0;
	
	printf("Enter text: ");
	scanf("%49s", string);
	
	while (index < sizeof(string)) {
		if (char check[] = "Hello") {
			char newString[sizeof(check)];
			int i = 0;
			for (currentIndex = index; currentIndex < sizeof[check]; currentIndex++) {
				newString[i] = 
			}
		}
	}
}
