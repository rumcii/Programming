/*Да се напише програма, която намира последователност от числа в*/
/*масив, които имат сума равна на число, въведено от конзолата (ако има*/
/*такава). Пример: {4, 3, 1, 4, 2, 5, 8}, S=11 -> {4, 2, 5}.*/

#include <stdio.h>

main()
{
    int arr[] = {4, 3, 1, 4, 2, 5, 8};
    int result[sizeof(arr) / sizeof(arr[0])];
    int number;
    int i;
    int j;
    int sum = 0;
    int counter = 0;
    
    printf("Enter number: ");
    scanf("%d", &number);
    
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        j = i;
        
        while (sum < number && j < sizeof(arr) / sizeof(arr[0])) {
            sum += arr[j];
            result[counter++] = arr[j++];
        }
        if (sum == number) {
            printf("\nSum = %d -> {", sum);
            for (i = 0; i < counter - 1; i++) {
                printf("%d, ", result[i]);
            }
            printf("%d", result[counter - 1]);
            printf("}\n\n");
            return;
        }
        else {
            sum = 0;
            counter = 0;
        }
    }
    printf("\nwrong\n\n");
}
