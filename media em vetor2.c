//colocar valores em um vetor, mostrar a soma e depois a media

#include <stdio.h>
int main(){
    
    int n, i;
    float soma = 0;
    float media;
    printf("Digite a quantidade de valores: ");
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
        soma +=v[i];
    }
    printf("A soma é igual a %.0f\n",soma);
    media = soma / n;
    printf("A media é igual a %.2f\n",media);
    printf("Valores menores que a media: ");
    for(i=0;i<n;i++){
        if(v[i]<media){
            printf(" { %d } ",v[i]);
        }
    }
    printf("\nValores maiores que a média: ");
    for(i=0;i<n;i++){
        if(v[i]>media){
            printf(" { %d } ",v[i]);
        }
    }
    return 0;
}
