#include <stdio.h>
int main (){
    
    int n,cont,i;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            cont++;
        }
    }
    if(cont==2){
        printf("%d é um número primo",n);
    }else{
        printf("%d não é primo",n);
    }
    return 0;
}
