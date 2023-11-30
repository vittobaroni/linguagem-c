// o programa le o tamanho de um vetor, le os valores dele e imprime eles no final 

#include <stdio.h>
int main(){
    
    int i,n,valor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    
    int v[n];
    for(i = 0; i<n ; i++){
        printf("Digite o valor do elemento %d: ",i);
        scanf("%d",&v[i]);
    }
    printf("Vetor:\n");
    for(i=0;i<n;i++){
        printf(" {%d} ",v[i]);
    }
    return 0;
}
