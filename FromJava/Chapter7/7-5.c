/*Напишете програма, която намира максималната редица от нарастващи*/
/*елементи в масив. Пример: {3, 2, 3, 4, 2, 2, 4} -> {2, 3, 4}.*/

#include <stdio.h>

main()
{
    int counter1 = 1;
    int counter2 = 1;
    
    int best;
    
    int arr[] = {1, 2, 3, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 0, 3, 2, 1, 2, 3, 4, 5};
    int i;
    int n;
    
    for (i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++) {
        if (counter2 > counter1) {
            counter1 = counter2;
            best = i;
        }
        if (arr[i] < arr[i + 1]) {
            counter2++;
        }
        else {
            counter2 = 1;
        }
    }
    
    for (i = (best - counter1 + 1); i <= best ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}
