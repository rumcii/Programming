// Напишете програма, която за подадени дължина и височина на
// правоъгълник, изкарват на конзолата неговият периметър и лице.

#include <stdio.h>

int perimeter(int, int);
int area(int, int);

int a;
int b;

main()
{
	printf("\nEnter width for regtangle: ");
	scanf("%d", &a);
	printf("\nEnter height for regtangle: ");
	scanf("%d", &b);

	printf("\nThe perimeter is: ");
	printf("%d\n", perimeter(a, b));

	printf("\nThe area regtangle is: %d\n\n", area(a, b));

	return 0;
}

int perimeter(a, b)
{
	int p;

	p = 2 * (a + b);

	return p;
}

int area(a, b)
{
	int s;

	s = a * b;

	return s;
}