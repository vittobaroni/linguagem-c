#include <stdio.h>
//declarar a variavel
int soma( int a, int b){
    //corpo da função
    int resultado = a + b;
    return resultado;
}
int main(){
    //chamada da função e impressão do resultado
    int resultado = soma(5,7);
    printf("Resultado da Soma: %d",resultado);
    
    return 0;
}
