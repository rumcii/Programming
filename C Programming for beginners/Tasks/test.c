#include <stdio.h>
//#include <string.h>

main()
{
	int a = 5;
	int *b;
	
	*b = a;
	
	
	
	*b = *b * 2;
	
	printf("%d\n", a);

}
