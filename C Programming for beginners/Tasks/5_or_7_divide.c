// Напишете булев израз, който да проверява дали дадено цяло число се
// дели на 5 и на 7 без остатък.

#include <stdio.h>

main()
{
	int a;

	printf("Enter some number: ");
	scanf("%d", &a);

	if (a % 5 == 0 && a % 7 == 0) {
		printf("\nThis is the number!!!\n\n");
	} else if (a % 5 == 0 && a % 7 != 0) {
		printf("\n%d is divide only on 5\n\n", a);
	} else if (a % 5 != 0 && a % 7 == 0) {
		printf("\n%d is divide only on 7\n\n", a);
	} else {
		printf("\n%d don't divide on 5 and 7\n\n", a);
	}
	return 0;
}