// Convert binary number to integer number

#include <stdio.h>

char cBinNumber[20];

char convertBinary(int);
int powerOfTwo(int);

main()
{
	printf("\nEnter binary number: ");
	scanf("%19s", cBinNumber);

	printf("%d\n", sizeof(cBinNumber));

}

char convertBinary(int iResult)
{
	iResult = 0;
	int iCounter;
	char[]

	for (iCounter = sizeof(cBinNumber) - 1; iCounter >= 0 ; iCounter--) {
		if (cBinNumber[iCounter] != 0) {
			iResult += 
		}
	}

}

int powerOfTwo(int iNumber)
{
	iResult = 1;

	if (iNumber == 0) {
		return 1;
	}

	while (true) {
		iResult = iResult * 2;

		--iNumber;

		if (iNumber == 0)
			break;
	}

	return iResult;
}