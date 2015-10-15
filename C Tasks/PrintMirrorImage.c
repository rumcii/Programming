/*Problem statement*/
/*Given a two dimensional array, print its mirror image if mirror is placed along one of the sides of the array.*/

/*Input*/
/*First line of input will contain a number T = number of test cases. Each test case will contain two positive integers n and m (1<=n, m<=50) on a single line separated by space. Next n lines will each contain a string of exactly m characters. Next line will contain a character 'V' or 'H'. If character is V, mirror is placed vertically along the right-most column. If the character is H, the mirror is placed horizontally along the bottom-most row.*/

/*Output*/
/*For each test case, print the n*m mirror image - n lines with strings of m character each. Print an extra empty line after output for each test case.*/

#include <stdio.h>

#define MAXLINE 50

int n;
int m;

char * verticalMirror(char*[]);
char * horizontalMirror(char*[]);
int * stringLength(char[][]);

int main()
{
    int i;
    int j;
    
    int count = 0;
    
    printf("T = ");
    scanf("%d %d", &n, &m);
    
    char arr[n][m];
    
    while (count < n) {
        scanf("%s", arr[count]);
        
        count++;
    }
    
/*    for (i = 0; i < n; i++) {*/
/*        for (j = 0; arr[i][j] != '\0'; j++) {*/
/*            printf("%c", arr[i][j]);*/
/*        }*/
/*        printf("\n");*/
/*    }*/

    int *p = stringLength(arr[n][m]);
    for (i = 0; i < n; i++) {
        printf("%d ", p + i);
    }
    printf("\n");
    
    return 0;
}

/*char* verticalMirror(char *arr[])*/
/*{*/
/*    int i;*/
/*    int j;*/
/*    int k;*/

/*    char *ptr[m];*/
/*    */
/*    for (i = 0; i < n; i++) {*/
/*        for (j = m - 2, k = 0; j >= 0; j--, k++) {*/
/*            ptr[i][j] = arr[i][k];*/
/*        }*/
/*        ptr[i][k]*/
/*    }*/
/*}*/

int * stringLength(char arr[][])
{
    static int result[n];
    
    int i;
    int j;
    
    for (i = 0; i < n; i++) {
        for (j = 0; arr[i][j] != '\0'; j++) {
            ;
        }
        result[i] = j;
    }
    return result;
}
