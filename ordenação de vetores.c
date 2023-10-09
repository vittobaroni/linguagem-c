#include <stdio.h>
int main(){
    
    int i,auxiliar,x,n;
    
    printf("Tamanho do vetor: ");
    scanf("%d",&n);
    int v[n];
    for (i=0;i<n;i++){
        printf("Posição %d: ",i+1);
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++){
        for(x=i+1;x<n;x++){
            
            if(v[i] > v[x]){
                auxiliar = v[i];
                v[i] = v[x];
                v[x] = auxiliar;
            }
        }
    }
    
    printf("Ordem Crescente: \n");
    for(i=0;i<n;i++){
        printf("%d\n",v[i]);
    }
    
    return 0;
}
