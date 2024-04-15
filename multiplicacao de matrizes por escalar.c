#include <stdio.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

// Função para multiplicar uma matriz por um escalar
void multiplicacaoPorEscalar(int matriz[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas, int escalar) {
    int i, j;

    // Loop para percorrer cada elemento da matriz
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            // Multiplica o elemento da matriz pelo escalar
            matriz[i][j] *= escalar;
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
    int linhas, colunas, escalar;
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int i, j;

    // Solicita ao usuário as dimensões da matriz
    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);

    // Solicita ao usuário os elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Solicita ao usuário o valor do escalar
    printf("Digite o valor do escalar: ");
    scanf("%d", &escalar);

    // Chama a função para multiplicar a matriz pelo escalar
    multiplicacaoPorEscalar(matriz, linhas, colunas, escalar);

    // Imprime o resultado da multiplicação por escalar
    printf("O resultado da multiplicação da matriz por escalar é:\n");
    exibeMatriz(matriz, linhas, colunas);

    return 0;
}
