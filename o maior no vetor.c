#include <stdio.h>
int main(){
    
    int i,n,maior;
    printf("Tamanho do vetor: ");
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++){
        printf("Posição %d: ",i+1);
        scanf("%d",&v[i]);
    }
    maior = -9999;
    for(i=0;i<n;i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }printf("Vetor: ");
    for(i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    printf("O maior vetor é: %d",maior);
    return 0;
}
