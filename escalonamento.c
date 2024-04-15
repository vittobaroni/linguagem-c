#include <stdio.h>
#include <stdlib.h>

void print_matriz(int m, int n, float A[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%g ", A[i][j]);
        }
        printf("\n");
    }
}

void escalona(int Linha, int Coluna, float A[Linha][Coluna]) {
    for (int j = 0; j < Coluna; j++) {
        for (int i = j; i < Linha; i++) {
            if (A[i][j] != 0) {
                if (i != j) {
                    for (int k = 0; k < Linha; k++) {
                        float temp = A[i][k];
                        A[i][k] = A[j][k];
                        A[j][k] = temp;
                    }
                }
                for (int m = j + 1; m < Linha; m++) {
                    if (A[m][j] != 0) { // Adiciona verificação se a linha atual já está zerada
                        float kon = -A[m][j] / A[j][j];
                        for (int n = j; n < Coluna; n++) {
                            A[m][n] += kon * A[j][n];
                        }
                    }
                }
                print_matriz(Linha, Coluna, A);
                printf("\n");
                break;
            }
        }
    }
}


int main() {
    int m, n;

    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &m, &n);

    float A[m][n];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    printf("Matriz original:\n");
    print_matriz(m, n, A);
    printf("\n");

    escalona(m, n, A);

    return 0;
}
