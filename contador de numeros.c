//ler um vetor de tamanho 20, e ver quantos numeros de 0 a 9 foram contados quantas vezes
#include <stdio.h>
int main(){
    int numeros[20];
    int contagem[10] = {0}; // vetor de contadores de 0 a 9
    int i;
    //usuario insere 20 numeros
    printf("Digite 20 números inteiros: ");
    for(i=0;i<20;i++){
        scanf("%d",&numeros[i]);
    //atualizando a contagem
        if(numeros[i] >= 0 && numeros[i] <=9){
            contagem[numeros[i]] ++;
        }
    }
    //imprime a quantidade de vezes que cada número de 0 a 9 foi informado
    printf("\nQuantidade de vezes que cada numero de 0 a 9 foi informado: \n");
    for(i=0;i<10;i++){
        printf("Numero %d: %d vezes\n",i,contagem[i]);
    }
    return 0;

}
