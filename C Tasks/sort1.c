//sort 1

#include <stdio.h>

int * sort1(int []);
void sort2();
void sort3();
int check(int [], int);

int a[] = {1, 3, 5, 6, 1, 3};


main()
{
    printf("%lu\n", sizeof(a)/sizeof(a[0]));
    //printf("%lu\n", arrSize(a));
    
    int i;
    
    
    //sort2();
    
    printf("%d\n", check(a, 5));
    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    sort3();
/*    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {*/
/*        printf("%d ", removeInt(6)[i]);*/
/*    }*/
    printf("\n");
}

/*int * removeInt(int n)*/
/*{*/
/*    int i = 0;*/
/*    int index = 20;*/
/*    */
/*    while (i < (sizeof(a) / sizeof(a[0]) - 1)) {*/
/*        if (a[i] == n) {*/
/*            a[i] = a[i + 1];*/
/*            index = i;*/
/*        }*/
/*        else if ( i > index) {*/
/*            a[i] = a[i + 1];*/
/*        }*/
/*        i++;*/
/*    }*/
/*    return a;*/
/*}*/

void sort2()
{
    int result[10];
    int minIndex;
    int i = 0;
    int j;
    int index;
    
    for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
        index = i;
        
        for (j = i; j < (sizeof(a) / sizeof(a[0])); j++) {
            if (a[index] > a[j]) {
                index = j;
            }
        }
        
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
}

void sort3()
{
    int result[10];
    int indexes[10];
    
    int i;
    int j = 0;
    int minIndex = 0;
    
    while ((sizeof(result) / sizeof(result[0])) <= (sizeof(a) / sizeof(a[0]))) {
        if (!check(indexes, i) && i < minIndex) {
             minIndex = i;
             indexes[j] = i;
             printf("%d ", indexes[j]);
             j++;
        }
    }
    
    j = 0;
    
    for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
        result[i] = a[indexes[i]];
        printf("%d ", result[i]);
    }
    printf("\n");
}

int check(int arr[], int n)
{
    int i;
    
    for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
        if (arr[i] == n) {
            return -1;
        }
    }
    return 1;
}

