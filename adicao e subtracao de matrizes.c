#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void addMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
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
    int rows, cols;
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int i, j;
    char operation;

    printf("Digite o número de linhas e colunas das matrizes: ");
    scanf("%d %d", &rows, &cols);

    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Escolha a operação (a para adição, s para subtração): ");
    scanf(" %c", &operation);

    if (operation == 'a') {
        addMatrices(mat1, mat2, result, rows, cols);
        printf("A soma das duas matrizes é:\n");
        displayMatrix(result, rows, cols);
    } else if (operation == 's') {
        subtractMatrices(mat1, mat2, result, rows, cols);
        printf("A subtração das duas matrizes é:\n");
        displayMatrix(result, rows, cols);
    } else {
        printf("Operação inválida!\n");
    }

    return 0;
}
