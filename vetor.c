#include <stdio.h>
int main (){
    int i;
    int n;
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    printf("Dados inseridos: ");
    for(i=0;i<n;i++){
        printf(" %d ",v[i]);
    }
    return 0;
}
