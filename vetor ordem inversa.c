//colocar o vetor na ordem inversa

#include <stdio.h>
int main(){
    
    int v[10];
    int i,n;
    printf("Digite 10 valores: ");
    for(i=0;i<10;i++){
        scanf("%d",&v[i]);
    }
    printf("Vetor declarado: ");
    for(i=0;i<10;i++){
        printf(" {%d} ",v[i]);
    }
    printf("\n Vetor na ordem inversa: ");
    for(i=9;i>=0;i--){
        printf(" {%d} ",v[i]);
    }
    return 0;
}
