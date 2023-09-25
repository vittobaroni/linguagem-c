// calculo de media simples //


#include <stdio.h>
int main(){
    
    int n1;
    int n2;
    int media;
    
    printf("Digite a primeira nota:\n");
    scanf("%d", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%d",&n2);
    
    media = (n1+n2)/2;
    if(media >=6){
        printf("Aprovado!\n");
    } 
    else{
        printf("Reprovado!!");
    }
    return 0;
}
