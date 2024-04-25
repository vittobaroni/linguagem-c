// escreva uma função menor_x que recebe um vetor de Dados e retorna o elemento do
//  vetor que tenha o menor valor de X

#include <stdio.h>
typedef struct{
  float x;
  char c;
} Dados;

void imprimeDados(Dados D){
  printf("%f %c\n",D.x, D.c);
}
Dados menor_x(int tamanho, Dados *dados){
  Dados menor_elemento = dados[0];
  for(int i = 1; i < tamanho ; i++){
    if(dados[i].x < menor_elemento.x){
      menor_elemento = dados[i];
    }
  }
  return menor_elemento;
}
int main(){
  Dados D[] = {{1.5,'a'},{4.5,'b'},{5.7,'a'},{0.5,'b'},{7.5,'c'}};
  Dados menor = menor_x(5,D);
  imprimeDados(menor);
}
