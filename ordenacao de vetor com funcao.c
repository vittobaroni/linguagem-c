#include <stdio.h>
void ordenarvetor(int n[], int tamanho){
    int i,j,aux;
    tamanho = 3;
    for(i=0;i < tamanho;i++){
        for(j=i+1;j<tamanho;j++){
            if(n[i] > n[j]){
               aux = n[i];
               n[i] = n[j];
               n[j] = aux;
            }
        }
    }
}
int main(){
    int n[3];
    int tamanho;
    int i;
    printf("Digite tres valores: ");
    for(i=0;i<3;i++){
        scanf("%d",&n[i]);
    }
    ordenarvetor(&n,&i);
    printf("Vetor ordenado: ");
    for(i=0;i<3;i++){
        printf(" {%d} ",n[i]);
    }
}
    
    
