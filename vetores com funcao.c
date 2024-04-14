//Escreva um programa que implemente o esquema de variáveis abaixo 
//Imprima cinco valores do vetor a partir do valor apontado por prt


#include <stdio.h>
int main (){
    int vetor[12] = {54,21,73,79,10,8,32,34,63,76,14,21};
    int* prt = vetor;
    for(int i = 0; i < 5 ; i++){
        printf(" %d ", prt[i+2]);
    }
    
}
