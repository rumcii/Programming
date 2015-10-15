/*Сортиране на масив означава да подредим елементите му в нарастващ*/
/*(намаляващ) ред. Напишете програма, която сортира масив. Да се*/
/*използва алгоритъма "Selection sort".*/

#include <stdio.h>

void increasingOrder();
void decreasingOrder();
void swap(int, int);

int arr[] = {2, 5, 1, 7, 3, 7, 9, 2};

main()
{
    increasingOrder();
    
    int i;
    
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    decreasingOrder();
    
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

void swap(int n, int m)
{
    int temp = arr[n];
    arr[n] = arr[m];
    arr[m] = temp;
}

void increasingOrder()
{
    int i;
    int j;
    int index;
    
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        index = i;
        
        for (j = i; j < sizeof(arr) / sizeof(arr[0]); j++) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }
        swap(i, index);
    }
}

void decreasingOrder()
{
    int i;
    int j;
    int index;
    
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        index = i;
        
        for (j = i; j < sizeof(arr) / sizeof(arr[0]); j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        swap(i, index);
    }
}
