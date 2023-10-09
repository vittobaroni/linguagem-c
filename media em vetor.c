#include <stdio.h>
int main (){
    
    int n,i,soma;
    float media;
    scanf("%d",&n);
    int v[n];
    soma=0;
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
        soma +=v[i];
    }
    printf(" a soma é igual a %d\n",soma);
    media = soma/n;
    printf(" e a média é igual a %2.f",media);
    return 0;
}
