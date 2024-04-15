#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void scalarMultiply(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols, int scalar) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, scalar;
    int matrix[MAX_ROWS][MAX_COLS];
    int i, j;

    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &rows, &cols);

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Digite o valor do escalar: ");
    scanf("%d", &scalar);

    scalarMultiply(matrix, rows, cols, scalar);

    printf("O resultado da multiplicação da matriz por escalar é:\n");
    displayMatrix(matrix, rows, cols);

    return 0;
}
