// Create a counting program that counts from 1 to 100 in
// increments of 5.

#include <stdio.h>

main()
{
	int iCounter;

	for (iCounter = 1; iCounter <= 100; iCounter += 5) {
		printf("%d\n", iCounter);
	}
	return 0;
}