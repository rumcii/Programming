// Create a program that prompts a user for her name. Store the
// user’s name using the scanf() function and return a greeting
// back to the user using her name.

#include <stdio.h>

main()
{
	char cName[20];

	printf("Enter your name: ");
	scanf("%19s", cName);
	scanf("%19s", cName);
	scanf("%19s", cName);
	printf("Hello %s\n", cName);
	scanf("%19s", cName);
	printf("%s\n", cName);
}
