/*Задача 2 - Четене на променлив брой вход от потребителя.*/

/*Във файл `read_n_numbers.py` имаме следната програма:*/

/*```python*/

/*n = input("Enter count of numbers: ")*/
/*n = int(n)*/

/*count = 1*/
/*numbers = []*/

/*while count <= n:*/
/*    number = input("Enter number: ")*/
/*    number = int(number)*/

/*    numbers = numbers + [number]*/

/*    count += 1*/

/*print(numbers)*/
/*```*/

/*По този начин може да прочетем променлив брой вход от потребителя.*/

/***Въведи числото `n` и на следващите `n` реда ще има по 1 число***/

/***Пуснете програмата и я разучете!***/

#include <stdio.h>

main()
{
	int n;
	int index = 0;
	int number;
	int *ptrN;
	int arr[];
	printf("%d", n);
	printf("\nEnter number: ");
	scanf("%d", &n);

	ptrN = &n;
	
	
	printf("%d\n%d\n", n, sizeof(arr));
	while (*ptrN > 0) {
		printf("\nEnter new number: ");
		scanf("%d", &number);
		
		arr[index] = number;
		
		index++;
		
		*ptrN--;
	}
	printf("%d\n%d\n", n, sizeof(arr));
/*	for (index = 0; index < sizeof(arr); index++) {*/
/*		printf("%d ", arr[index]);*/
/*	}*/
	printf("\n\n");
}
