// Напишете израз, който да проверява дали дадено цяло число е четно
// или нечетно.

#include <stdio.h>

main()
{
	int a;

	printf("Enter number: ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("\nThe number is even\n\n");
	} else {
		printf("\nThe number is odd\n\n");
	}
	return 0;
}