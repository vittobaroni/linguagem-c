#include <stdio.h>

int main() {
    // Solicite ao usuário o número de linhas (V) e colunas (N)
    int V, N;
    printf("Digite o numero de linhas: ");
    scanf("%d", &V);
    printf("Digite o numero de colunas: ");
    scanf("%d", &N);

    // Declare e leia os valores da matriz
    int matriz[V][N];
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exiba a matriz
    printf("\nMatriz inserida:\n");
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
