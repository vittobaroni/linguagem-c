#include <stdio.h>
int somarvetor(int vetor[], const int tamanho){

  int soma = 0;
  int *ponteiro;
  int *const finalvetor = vetor + tamanho;

  for(ponteiro = vetor; ponteiro <finalvetor; ponteiro ++)
  {
   soma += *ponteiro; 
  }

  return soma;
}


int main(void) {
  
  int somarvetor(int vetor[], const int tamanho);
  int vetor[10] = {5,5,5,5,5,5,5,5,10,5};

  printf("A soma dos membros do vetor = %d",somarvetor(vetor,10));

}
