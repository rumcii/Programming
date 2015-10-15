// Напишете израз, който да проверява дали дадено цяло число съдържа
// 7 за трета цифра (отдясно на ляво).

#include <stdio.h>

int digitCount(int);

main()
{
	int a;
	int m = 0;
	int n;

	printf("\nEnter some number: ");
	scanf("%d", &a);

	if (digitCount(a) >= 3) {
		while (a != 0) {
			a = a / 10;
			m++;

			if (m == 2) {
				n = a % 10;

			}
		}
	} else {
		printf("\nThe number is smaller than 3 digits.\n\n");
		return 0;
	}

	if (n == 7) {
		printf("\nThe third digit is 7.\n\n");
	} else {
		printf("\nThe third digit isn't 7.\n\n");
	}

	return 0;

}

int digitCount(int a)
{
	int m = 0;

	while (a != 0) {
		a = a / 10;
		m++;
	}

	return m;
}