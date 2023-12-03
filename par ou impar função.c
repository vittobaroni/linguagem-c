#include <stdio.h>
// declarar a função 

void VerificarParImpar(int numero){
    //corpo da função
    if (numero % 2 == 0){
        printf("O numero é par");
    } else{
        printf("O numero é ímpar");
    }
}
int main(){
    //variavel
    
    int numero;
    // ler o  numero
    printf("Digite um número: ");
    scanf("%d",&numero);
    
    //chamar a função
    VerificarParImpar(numero);
    
    return 0;
    
}
