//calcular a media de tres numeros usando função

#include <stdio.h>
//declarar a função e o corpo dela
int calcularmedia(float a, float b, float c){
    return (a + b + c) /3;
}
int main(){
    float num1,num2,num3;
    scanf("%f %f %f",&num1,&num2,&num3);
    float media = calcularmedia(num1,num2,num3);
    printf("%f",media);
    
    return 0;
}
