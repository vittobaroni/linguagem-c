#include <stdio.h>
int main (){
    int n,i,soma;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        soma+=i;
    }
    printf("A soma dos primeiros %d números naturais é igual a %d",n,soma);
return 0;
}

