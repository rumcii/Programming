/*Напишете програма, която намира най-често срещания елемент в масив.*/
/*Пример: {4, 1, 1, 4, 2, 3, 4, 4, 1, 2, 4, 9, 3} -> 4 (5 пъти).*/

#include <stdio.h>

main()
{
    int arr[] = {4, 1, 1, 4, 2, 3, 4, 4, 1, 2, 4, 9, 3};
    int found = 0;
    int counter = 0;
    int foundCurrent;
    int countCurrent = 0;
    
    int i;
    int j;
    
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        foundCurrent = arr[i];
        printf("number is: %d\t%d\n", arr[i], foundCurrent);
        
        for (j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
            if (arr[j] == arr[i]) {
                countCurrent++;
                printf("counter is: %d\n", countCurrent);
            }
        }
        printf("\n");
        if (countCurrent > counter) {
            counter = countCurrent;
            found = foundCurrent;
        }
        countCurrent = 0;
    }
    printf("\nMost repeated number is: %d(%d times)\n\n", found, counter);
}
