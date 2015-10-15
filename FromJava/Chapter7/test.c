#include <stdio.h>

main()
{
    int arr[] = {1, 2, -1, 4, NULL, 5, 6};
    int i;
    
    for (i = 0; i < 7 && arr[i] != EOF; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}
