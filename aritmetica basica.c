

//aritmetica basica dos numeros//

#include <stdio.h>
int main(){
    
    int a,b,soma,sub,multi,divisao;
    
    printf("Digite o primeiro valor:\n");
    scanf("%d",&a);
    printf("Digite o segundo valor:\n");
    scanf("%d",&b);
    
    soma = a + b;
    sub = a - b;
    multi = a * b;    
    divisao = a / b;
    
    printf("Valores calculados\n");
    printf("SOMA: %d\n",soma);
    printf("SUBTRAÇÃO: %d\n",sub);
    printf("MULTIPLICAÇÃO: %d\n",multi);
    printf("DIVISÃO: %d\n",divisao);
    
    return 0;
}
