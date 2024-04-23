#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

  //declaro a função
  
  const char *item[6] = {"Apple", "Banana", "Orange", "Pear", "Grape", "Mango"};

  //inicializar o gerador de números aleatórios
  srand(time(NULL));

  //gerar um índice aleatório da função

  int indice = rand() % 6;

  //imprime a palavra correspondente ao índice gerado

  printf("Palavra sorteada: %s\n", item[indice]);
}
