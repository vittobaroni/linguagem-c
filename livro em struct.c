#include <stdio.h>

//declarar struct 
struct Livro{
    char nome[100];
    char autor[50];
    int ano;
};

int main(){
    
    int i;
    
    //declarando um array de livros
    struct Livro biblioteca[3];
    for(i=0;i<3;i++){
    
    //preenchendo informações para cada livro
        printf("Digite o titulo do livro %d: ",i + 1);
        scanf("%s",biblioteca[i].nome);
        
        printf("Digite o autor do livro %d: ",i + 1);
        scanf("%s",biblioteca[i].autor);
        
        printf("Digite o ano de publicação do livro %d: ", i+1);
        scanf("%d",&biblioteca[i].ano);
    }
    printf("\nInformações dos Livros:\n");
    for( i = 0; i < 3; i++){
        printf("Livro: %s\n",biblioteca[i].nome);
        printf("Autor: %s\n",biblioteca[i].autor);
        printf("Ano de Publicação: %d\n",biblioteca[i].ano);
    }
    return 0;
}
