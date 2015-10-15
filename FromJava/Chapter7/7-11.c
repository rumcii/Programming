/*Да се напише програма, която създава правоъгълна матрица с размер*/
/*(n, m). Размерността и елементите на матрицата да се четат от*/
/*конзолата. Да се намери подматрицата с размер (3,3), която има*/
/*максимална сума.*/

#include <stdio.h>
#include <stdlib.h>

int** makeMatrix(int, int);
void addToMatrix(int**);
int matrixSum(int**, int, int);
int** maxMatrix(int**, int, int);

int n;
int m;

main()
{
    int i;
    int j;
    
    printf("Enter matrix size: ");
    scanf("%d %d", &n, &m);
    
    int **matrix;
    int **newMatrix;
    
    matrix = makeMatrix(n, m);
    
    addToMatrix(matrix);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nBiggest matrix 3x3 is:\n");
    
    newMatrix = maxMatrix(matrix, n, m);
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%2d ", newMatrix[i][j]);
        }
        printf("\n");
    }
}

int** makeMatrix(int n, int m)
{
    int **matrix = (int**)malloc(n * sizeof(int*));
    int row;
    
    for (row = 0; row < n; row++) {
        matrix[row] = (int*)malloc(m * sizeof(int));
    }
    return matrix;
}

void addToMatrix(int **matrix)
{
    int i;
    int j;
    int rowCount = 0;
    int number;
    
    for (i = 0; i < n; i++) {
            printf("Enter elements for row %d: \n", rowCount);
        for (j = 0; j < m; j++) {
            scanf("%d", &number);
            matrix[i][j] = number;
        }
        rowCount++;
    }
}

int matrixSum(int **matrix, int n, int m)
{
    int i;
    int j;
    int result = 0;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            result += matrix[i][j];
        }
    }
    return result;
}

int** maxMatrix(int **matrix, int n, int m)
{
    int **maxMatrix = makeMatrix(3, 3);
    int **temp = makeMatrix(3, 3);
    
    int i = 0;
    int j = 0;
    int sum = 0;
    int maxSum = 0;
    int indexI = 0;
    int indexJ = 0;
    int x = 0;
    int y = 0;
    
    while (indexI + 3 <= n) {
        for (i = indexI, x = 0; i < indexI + 3; i++, x++) {
            for (j = indexJ, y = 0; j < indexJ + 3; j++, y++) {
                temp[x][y] = matrix[i][j];
            }
        }
        if (indexJ + 3 < m) {
            indexJ++;
        }
        else {
            indexI++;
            indexJ = 0;
        }
        sum = matrixSum(temp, 3, 3);
        
        if (sum > maxSum) {
            maxSum = sum;
            maxMatrix = temp;
        }
    }
    return maxMatrix;
}
