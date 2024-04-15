#include <stdio.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

// Função para adicionar duas matrizes
void somaMatrizes(int mat1[MAX_LINHAS][MAX_COLUNAS], int mat2[MAX_LINHAS][MAX_COLUNAS], int resultado[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas) {
    int i, j;

    // Loop para percorrer cada elemento das matrizes
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            // Adiciona os elementos correspondentes de ambas as matrizes
            resultado[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Função para subtrair duas matrizes
void subtraiMatrizes(int mat1[MAX_LINHAS][MAX_COLUNAS], int mat2[MAX_LINHAS][MAX_COLUNAS], int resultado[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas) {
    int i, j;

    // Loop para percorrer cada elemento das matrizes
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            // Subtrai os elementos correspondentes de ambas as matrizes
            resultado[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Função para exibir uma matriz
void exibeMatriz(int matriz[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas) {
    int i, j;

    // Loop para percorrer cada elemento da matriz
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            // Imprime o elemento da matriz seguido de um espaço
            printf("%d ", matriz[i][j]);
        }
        // Imprime uma nova linha após cada linha da matriz
        printf("\n");
    }
}

int main() {
    int linhas, colunas;
    int mat1[MAX_LINHAS][MAX_COLUNAS], mat2[MAX_LINHAS][MAX_COLUNAS], resultado[MAX_LINHAS][MAX_COLUNAS];
    int i, j;

    // Solicita ao usuário as dimensões das matrizes
    printf("Digite o número de linhas e colunas das matrizes: ");
    scanf("%d %d", &linhas, &colunas);

    // Solicita ao usuário os elementos da primeira matriz
    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Solicita ao usuário os elementos da segunda matriz
    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Chama a função para adicionar as matrizes
    somaMatrizes(mat1, mat2, resultado, linhas, colunas);

    // Imprime o resultado da adição
    printf("A soma das duas matrizes é:\n");
    exibeMatriz(resultado, linhas, colunas);

    // Chama a função para subtrair as matrizes
    subtraiMatrizes(mat1, mat2, resultado, linhas, colunas);

    // Imprime o resultado da subtração
    printf("A subtração das duas matrizes é:\n");
    exibeMatriz(resultado, linhas, colunas);

    return 0;
}
