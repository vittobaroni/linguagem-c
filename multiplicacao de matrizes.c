#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int cols2) {
    int i, j, k;

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
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
    int rows1, cols1, rows2, cols2;
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int i, j;

    printf("Digite o número de linhas e colunas da primeira matriz: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Digite o número de linhas e colunas da segunda matriz: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Erro: O número de colunas da primeira matriz deve ser igual ao número de linhas da segunda matriz.\n");
        return 1;
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);

    printf("O resultado da multiplicação das duas matrizes é:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
