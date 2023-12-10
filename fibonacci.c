// sequencia de fibonacci usando Vetor

#include <stdio.h>
int main(){
    int n,i;
    printf("Quantos números deseja para a sequência de fibonacci? ");
    scanf("%d",&n);
    int fibo[n];
    
    fibo[0] = 0;
    fibo[1] = 1;
    for(i=2;i<n;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    printf("Sequência de Fibonacci com %d elementos: ",n);
    for(i=0;i<n;i++){
        printf(" {%d} ",fibo[i]);
    }
    return 0;
}
