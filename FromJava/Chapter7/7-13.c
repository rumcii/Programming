/*Да се реализира двоично търсене (binary*/
/*целочислен масив.*/

#include <stdio.h>
#include <stdlib.h>

void sort(int*);
int binarySearch(int*, int);

int lenght;

main()
{
    int arr[] = {1, 3, 54, 23, 67, 3, 9, 2, 9, 56, 0, 12};
    
    int i;
    int n;
    
    printf("enter number for search: ");
    scanf("%d", &n);
    
    lenght = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr);
    
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int index = binarySearch(arr, n);
    
    //printf("\n%d\n\n", index);
    
    if (index > 0) {
        printf("Searched index is at position %d\n", index);
    }
    else {
        printf("Number not found.\n");
    }
}

void sort(int *arr)
{
    int i;
    int j;
    int temp;
    int index;
    
    for (i = 0; i < lenght; i++) {
        index = i;
        for (j = i; j < lenght; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

int binarySearch(int *arr, int n)
{
    int index;
    int lower = 0;
    int upper = lenght - 1;
    int middle = (lower + upper) / 2;
    //printf("\n%d  %d  %d\n\n", lower, middle, upper);
    
    while (lower < upper) {
        //printf("\nMiddle: %d\n\n", middle);
        if (n > arr[middle]) {
            lower = middle + 1;
        }
        else if (n < arr[middle]) {
            upper = middle - 1;
        }
        else {
            return middle;
        }
        middle = (lower + upper) / 2;
    }
    
    return -1;
}
