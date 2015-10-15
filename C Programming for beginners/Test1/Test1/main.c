#include <stdio.h>

main()
{
	char cName[20];
	//char cName[20];

	printf("Enter your name: ");
	scanf("%19s", cName);
	scanf("%19s", cName);
	scanf("%19s", cName);
	printf("Hello %s\n", cName);
	scanf("%19s", cName);
	printf("%s\n", cName);
}