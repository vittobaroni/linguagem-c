// programa dará um valor padrão já do sistema , o usuário dá um novo valor e o sistema mostrará este


# include <stdio.h>


int main(){
    
    int idade = 0 ;
    
    printf("Valor inicial da idade: %d\n",idade);
    
    printf("Digite um valor para a nova idade:\n");
    scanf("%d",&idade);
    
    printf("Idade informada pelo usuário: %d\n",idade);
    
    return 0;
    
}
