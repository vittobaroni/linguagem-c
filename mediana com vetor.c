// calculo de mediana usando vetores

#include <stdio.h>

int main(){
    
    int i, n , j, aux;
    
    //declara o vetor e o tamanho dele
    printf("Digite o tamanho do Vetor: ");
    scanf("%d",&n);
    int v[n];
    //coloca os valores do vetor
    for(i=0;i<n;i++){
        printf("Digite os valores do vetor: ");
        scanf("%d",&v[i]);
    }
    //ordenar os valores, para calcular a mediana, em ordem crescente
    for(i=0;i<n;i++){
        for(j=i + 1;j<n;j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    //vetor ordenado, agora calcula a mediana
    float mediana;
    if (n % 2 == 0){
        // se o tamanho for par, vai somar os dois do meio e dividir por 2
        int meio1 = n/2 - 1;
        int meio2 = n/2;
        mediana = (v[meio1] + v[meio2]) / 2;
    } else{
        // se o tamanho for impar
        int meio = n/2;
        mediana = v[meio];
    }
    // agora basta imprimir a mediana
    printf("Valor da mediana: { %1.1f }  ",mediana);
    
    return 0;
}
