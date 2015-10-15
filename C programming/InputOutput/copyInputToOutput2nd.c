//copy input to output, 2nd version

#include <stdio.h>

main()
{
	int c;

	//c = getchar();

	while((c = getchar()) != EOF){
		putchar(c);
	}

	printf("%d is EOF\n",c);
}