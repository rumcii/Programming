//Exercise 1-8

#include <stdio.h>

main()
{
	int c, bl, nl, tab;

	bl = nl = tab = 0;

	while ((c = getchar()) != EOF){
		if (c == ' ')
			++bl;

		else if (c == '\n')
			++nl;

		else if (c == '\t')
			++tab;
	}

	printf("Numbers of blanks are: %d\nNumbers of new lines are: %d\nNumbers of tabs are: %d\n", bl, nl, tab);
}