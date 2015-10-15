//Exercise 1-9

#include <stdio.h>

main()
{
	int blank;

	char c, b;

	blank = 0;

	while ((c = getchar()) != EOF){
		if (c == ' ') {
			++blank;
		}

		if (blank >= 2)
			blank = 1;
		else {
			putchar(c);

			if (c != ' ')
				blank = 0;
		}
	}
}