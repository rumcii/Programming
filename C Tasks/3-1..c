/*Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at*/
/*the price of more tests outside.) Write a version with only one test inside the loop and measure*/
/*the difference in run-time.*/

#include <stdio.h>

#define MAX 10

void sort(int *);
int binSearch1(int, int [], int);
int binSearch2(int, int [], int);
int search(int, int [], int);

main()
{
    int a[] = {4, 2, 1, 8, 19, 45, 8, 2, 0, 345};
    int *arr;
    int i;
    int currentTime = 0;
    int time1 = 0;
    int time2 = 0;
    int time3 = 0;
    
    arr = a;
    
    sort(arr);
    
    for (i = 0; i < MAX; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    //0 1 2 2 4 8 8 19 45 345
    currentTime = time(NULL);
    printf("%d is an %d position in a\n", 8, search(8, a, MAX));
    time1 = time(NULL);
    printf("Search: %d\n", time1 - currentTime);
    printf("%d is an %d position in a\n", 8, binSearch1(8, a, MAX));
    time2 = time(NULL);
    printf("Binsearch 1: %d\n", time2 - currentTime);
    time3 = time(NULL);
    printf("%d is an %d position in a\n", 8, binSearch2(8, a, MAX));
    printf("Binsearch 2: %d\n", time3 - currentTime);
}

void sort (int *arr)
{
    int i;
    int j;
    int temp;
    int index;
    
    for (i = 0; i < MAX; i++) {
        index = i;
        
        for (j = i; j < MAX; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

int binSearch1(int x, int arr[], int n)
{
    int i;
    int hight = n - 1;
    int low = 0;
    int mid;
    
    while (low <= hight) {
        mid = (low + hight) / 2;
        if (x < arr[mid]) {
            hight = mid - 1;
        }
        else  if(x > arr[mid]) {
            low = mid + 1;
        }
        else {
            return mid;
        }
        //printf("%d\n", mid);
    }
    return -1;
}

int binSearch2(int x, int arr[], int n)
{
    int i;
    int hight = n - 1;
    int low = 0;
    int mid;
    
    mid = (low + hight) / 2;
    
    while (low <= hight && x != arr[mid]) {
        if (x < arr[mid]) {
            hight = mid - 1;
        }
        else {
            low = mid + 1;
        }
        mid = (low + hight) / 2;
    }
    
    if (x == arr[mid]) {
        return mid;
    }
    
    return -1;
}

int search(int x, int arr[], int n)
{
    int i;
    
    for (i = 0; i < n; i++) {
        if (x == arr[i]) {
            return i;
        }
    }
    
    return -1;
}
