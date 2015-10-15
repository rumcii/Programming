/*Character counting*/

#include <stdio.h>

main()
{
    int counter = 0;
    int c;
    
    while ((c = getchar()) != EOF) {
        counter++;
    }
    
    printf("The number of characters is: %d\n\n", counter);
    return 0;
}
