// ordenação de pessoas de menor para maior idade utilizando struct e vetores

#include <stdio.h>
typedef struct {
  int idade;
  float peso;
  float altura;
  char nome[100];
} Dados;

void ordena_idade(Dados D[], int tamanho) {
  for (int n = tamanho; n > 1; n--) {
    for (int i = 1; i < n; i++) {
      if (D[i - 1].peso > D[i].peso) {
        Dados temporario = D[i - 1];
        D[i - 1] = D[i];
        D[i] = temporario;
      }
    }
  }
}

int main() {
  Dados D[] = {{19, 40, 1.5, "Joao"},
               {13, 50, 1.6, "Maria"},
               {18, 60, 1.7, "Pedro"},
               {15, 70, 1.8, "Ana"}};
  ordena_idade(D, 4);

  printf("Em ordem de idade:\n");
  for (int i = 0; i < 4; i++) {
    printf("%d %g %s \n", D[i].idade, D[i].peso, D[i].altura, D[i].nome);
  }
  return 0;
}
