/*Copy input to output*/

#include <stdio.h>

main()
{
    int c;
    
    c = getchar();
    
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}
