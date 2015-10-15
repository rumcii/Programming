// Create a counting program that counts backward from 100 to 1
// in increments of 10.

#include <stdio.h>

// main()
// {
// 	int iCounter;

// 	for (iCounter = 100; iCounter >= 0; iCounter -= 10) {
// 		printf("%d\n", iCounter);
// 	}
// 	return 0;
// }


main()
{
	int iCounter = 100;

	while(iCounter >= 1) {
		printf("%d\n", iCounter);
		iCounter -= 10;
	}
	retun 0;
}