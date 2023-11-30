#include <stdio.h>

int main(){
    
    int i,n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    
    int v[n];
    for(i=0;i<n;i++){
        printf("Digite os valores dos vetores: ");
        scanf("%d",&v[i]);
    }
    
    int ultimo = 0;
    for(i=1;i<n;i++){
        if(v[i] > ultimo){
            ultimo = i;
        }
    }
    printf("O vetor é este: ");
    for(i=0;i<n;i++){
        printf("{ %d }",v[i]);
    }
    printf(" indice do vetor: %d ",ultimo);
    
    return 0;
}
