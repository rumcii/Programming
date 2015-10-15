//Copy input to output, 1st version

#include <stdio.h>

main()
{
	int c;

	//c = getchar();

	while (c != EOF) {
		c = getchar();
		putchar(c);
	}
}