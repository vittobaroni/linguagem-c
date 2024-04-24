// struct com vetor e função, para achar a pessoa mais jovem dentro de uma struct

typedef struct {
  int idade;
  float peso;
  float altura;
  char nome[100];
} Dados;

int pessoa_mais_jovem(Dados pessoas[], int tamanho) {
  int mais_jovem = 0;
  for (int i = 0; i < tamanho; i++) {
    if (pessoas[i].idade < pessoas[mais_jovem].idade) {
      mais_jovem = i;
    }
  }
  return mais_jovem;
}

int main() {
  Dados D[] = {{19, 40, 1.5, "Joao"},
               {13, 50, 1.6, "Maria"},
               {18, 60, 1.7, "Pedro"},
               {15, 70, 1.8, "Ana"}};
  int i = pessoa_mais_jovem(D, 4);
  printf("A pessoa mais jovem eh: %s\n", D[i].nome);

  return 0;
}
