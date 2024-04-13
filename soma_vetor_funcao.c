#include <stdio.h>

float soma_vetor(int tamanho, float vetor[]){
    float soma = 0.0;
    for(int i = 0; i < tamanho; i ++){
        soma += vetor[i];
    }
    return soma ;
}
int main(){
 float V[4] = {5, 8, 10, 2};
 float soma = soma_vetor(4, V);
 printf("Soma = %g", soma);
}
