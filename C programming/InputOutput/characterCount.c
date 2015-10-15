//Character counting

#include <stdio.h>

// main()
// {
// 	long nc;

// 	nc = 0;

// 	while(getchar() != EOF) {
// 		++nc;
// 	}

// 	printf("%ld\n", nc);
// }


main()
{
	double nch;

	for (nch = 0; getchar() != EOF; ++nch){
		;
	}

	printf("%.0f\n", nch);
}