// Напишете програма, която приема за вход четирицифрено число във
// формат abcd и след това извършва следните действия върху него:
// - Пресмята сбора от цифрите на числото.
// - Разпечатва на конзолата цифрите в обратен ред: dcba.
// - Поставя последната цифра, на първо място: dabc.
// - Разменя мястото на втората и третата цифра: acbd.

#include <stdio.h>

int digits[4];
int digitSum(int);
int reverse(int);
int firstLast(int);
int secondThird(int);

main()
{
	int iNumber;

	printf("\nEnter four digit number: ");
	scanf("%d", &iNumber);

	int m;
	int iCounter = 0;
	int i;

	while (iNumber != 0) {
		m = iNumber % 10;

		digits[iCounter] = m;

		++iCounter;

		iNumber = iNumber / 10;
	}

	printf("\n%d\n\n", digitSum(digits));
}

int digitSum(int digits)
{
	int iCounter = 0;
	int i;

	for (i = 0; i < 4; ++i) {
		iCounter += digits[i];
	}

	return iCounter;
}