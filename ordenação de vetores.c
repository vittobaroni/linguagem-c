#include <stdio.h>

int main(){
    
    int i, n, aux, j;
    
    // ler o tamanho do vetor:
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    
    // declarar o vetor, de acordo com o n lido
    int v[n];
    
    // colocar os valores do vetor
    for(i=0;i<n;i++){
        printf("Digite os valores dos vetores: ");
        scanf("%d",&v[i]);
        }
    // colocar o método de ordenação
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            // agora vai mudar de lugar, usando um if
            if(v[i] > v[j]){
                //atribuição de valores
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                // eles vao se comparar. O que for maior, vao trocar de lugar
            }
        }
    }
    printf("Ordem Crescente: \n");
    // mais um for, pra repetir os valores
    for(i=0;i<n;i++){
        printf("%d\n",v[i]);
        }
    return 0;
}
