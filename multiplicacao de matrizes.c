#include <stdio.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

// Função para multiplicar duas matrizes
void multiplicacaoMatrizes(int matrizA[MAX_LINHAS][MAX_COLUNAS], int matrizB[MAX_LINHAS][MAX_COLUNAS], int resultado[MAX_LINHAS][MAX_COLUNAS], int linhasA, int colunasA, int colunasB) {
    int i, j, k;

    // Loop para percorrer cada linha da matriz A
    for (i = 0; i < linhasA; i++) {
        // Loop para percorrer cada coluna da matriz B
        for (j = 0; j < colunasB; j++) {
            // Inicializa o elemento do resultado como zero
            resultado[i][j] = 0;
            // Loop para multiplicar os elementos e somá-los
            for (k = 0; k < colunasA; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
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
    int linhasA, colunasA, linhasB, colunasB;
    int matrizA[MAX_LINHAS][MAX_COLUNAS], matrizB[MAX_LINHAS][MAX_COLUNAS], resultado[MAX_LINHAS][MAX_COLUNAS];
    int i, j;

    // Solicita ao usuário as dimensões da matriz A
    printf("Digite o número de linhas e colunas da matriz A: ");
    scanf("%d %d", &linhasA, &colunasA);

    // Solicita ao usuário os elementos da matriz A
    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasA; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Solicita ao usuário as dimensões da matriz B
    printf("Digite o número de linhas e colunas da matriz B: ");
    scanf("%d %d", &linhasB, &colunasB);

    // Solicita ao usuário os elementos da matriz B
    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < linhasB; i++) {
        for (j = 0; j < colunasB; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Verifica se as matrizes podem ser multiplicadas
    if (colunasA != linhasB) {
        printf("Erro: As matrizes não podem ser multiplicadas devido às dimensões incompatíveis.\n");
        return 1;
    }

    // Chama a função para multiplicar as matrizes
    multiplicacaoMatrizes(matrizA, matrizB, resultado, linhasA, colunasA, colunasB);

    // Imprime o resultado da multiplicação
    printf("O resultado da multiplicação das matrizes é:\n");
    exibeMatriz(resultado, linhasA, colunasB);

    return 0;
}

