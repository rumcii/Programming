#include <stdio.h>

main()
{
	int i, c;
	int arr [10];

	int n = 0;

	for (i = 0; i < 10; ++i)
		arr[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++arr[c-'0'];
		}
	}

	for (i = 0; i < 10; ++i)
		printf("%d", arr[i]);

	printf("\n");

	return 0;
}