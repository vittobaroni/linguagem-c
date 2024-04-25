// Escreva a função procura_char que recebe um vetor de Dados e um caractere e 
// imprime todos os Dados do vetor contendo o caractere informado

#include <stdio.h>
typedef struct{
  float x;
  char c;
} Dados;

void imprimeDados(Dados D){
  printf("%g %c\n", D.x, D.c);
}
void procura_char(Dados *dados, int tamanho, char c){
  for(int i = 0; i < tamanho; i++){
    if(dados[i].c == c){
      imprimeDados(dados[i]);
    }
  }
}

int main(){
  Dados D[] = {{1.5,'a'},{4.5,'b'},{5.7,'a'},{0.5,'b'},{7.5,'c'}};
  procura_char(D,5,'c');
  procura_char(D,5,'b');
}
