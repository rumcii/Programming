#include <stdio.h>

// /* Print Fahrenheit celsius table
// 	for fahr = 0, 20, ...., 300*/

// main()
// {
// 	float fahr, celsius;
// 	int lower, upper, step;

// 	lower = 0;	// woler limit of temperature scale
// 	upper = 300;	// upper limit
// 	step = 20;	// step interval

// 	fahr = lower;

// 	while (fahr <= upper) {
// 		celsius = 5 * (fahr - 32) / 9;
// 		printf("%.0f\t%.1f\n", fahr, celsius);
// 		fahr = fahr + step;
// 	}
// }

main()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
		printf("%d\t%.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
}