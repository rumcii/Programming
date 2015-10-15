/*Напишете програма, която създава следните квадратни матрици и ги*/
/*извежда на конзолата във форматиран вид. Размерът на матриците се*/
/*въвежда от конзолата. Пример за (4,4):*/

#include <stdio.h>
#include <stdlib.h>

int ** makeMatrix(int, int);
void matrixA(int**, int, int);
void matrixB(int**, int, int);
void matrixC(int**, int, int);
void matrixD(int**, int, int);

main()
{
    int n;
    int m;
    
    printf("Enter matrix size: ");
    scanf("%d %d", &n, &m);
    
    int **matrix = makeMatrix(n, m);
    
    
    int i;
    int j;
    
    matrixA(matrix, n, m);
    
    printf("\nVariant A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    matrixB(matrix, n, m);
    printf("\nVariant B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    matrixC(matrix, n, m);
    printf("\nVariant C:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    matrixD(matrix, n, m);
    printf("\nVariant D:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrixA(int **matrix, int n, int m)
{
    int i = 0;
    int j = 0;
    int count = 1;
    
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            matrix[i][j] = count++;
        }
    }
}

void matrixB(int **matrix, int n, int m)
{
    int i;
    int j;
    int count = 1;
    int x = 0;
    
    for (j = 0; j < m; j++) {
        if (x == n) {
            for (i = x - 1; i >= 0; i--) {
                matrix[i][j] = count++;
            }
            x = i + 1;
        }
        else if (x == 0) {
            for (i = 0; i < n; i++) {
                matrix[i][j] = count++;
            }
            x = i;
        }
    }
}

void matrixC(int **matrix, int n, int m)
{
    int i = n - 1;
    int j = 0;
    int count = 1;
    int x = n - 1;
    
    matrix[i][j] = count++;
    
    while (i < n || x > 0) {
        x--;
        j = 0;
        
        for (i = x; i < n; i++) {
            matrix[i][j++] = count++;
        }
        //printf("i: %d\tj: %d\n", i, j);
    }
    j = 0;
    while (1) {
        for (i = 0, j = ++x; j < m; i++, j++) {
            matrix[i][j] = count++;
        }
        if (i == 0 && j == m) {
            break;
        }
    }
}

void matrixD(int **matrix, int n, int m)
{
    int i;
    int j;
    int x = 0;
    int count = 1;
    
    while (count <= n * m) {
        for (i = x, j = x; i < n - x; i++) {
            matrix[i][j] = count++;
        }
        
        
        for (i = n - 1 - x, j = x + 1; j < m - x; j++) {
            matrix[i][j] = count++;
        }
        
        for (i = n - 2 - x, j = m - 1 - x; i >= x; i--) {
            matrix[i][j] = count++;
        }
        
        x++;
        
        for (i = x - 1, j = m - 1 - x; j >= x; j--) {
            matrix[i][j] = count++;
        }
    }
}

int ** makeMatrix(int n, int m)
{
    int **matrix = (int **)malloc(n * sizeof(int *));
    int row;
    
    for (row = 0; row < n; row++) {
        matrix[row] = (int*)malloc(m * sizeof(int));
    }
    return matrix;
}
