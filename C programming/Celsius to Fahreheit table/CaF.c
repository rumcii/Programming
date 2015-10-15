//CaF

#include <stdio.h>

main()
{
	float celsuis, fahr;

	int lower = 0;

	int upper = 300;

	int step = 20;

	celsuis = lower;

	while (celsuis <= upper){
		fahr = (9 * celsuis + 160) / 5;
		printf("%.0f\t%.0f\n", celsuis, fahr);
		celsuis = celsuis + step;
	}
}