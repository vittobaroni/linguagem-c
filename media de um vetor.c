#include <stdio.h>

int main(){
    
    int n,i,j;
    float soma = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    
    int v[n];
    for(i=0;i<n;i++){
        printf("Digite os valores do vetor: ");
        scanf("%d",&v[i]);
        soma += v[i];
    }
    float media = soma / n;
    printf("Media deste vetor: %.2f ",media);
    
    return 0;
}
