#include <stdio.h>
int main(){
    
    char nome[100];
    int cont_vogal = 0 ;
    int cont_consoante = 0;
    int i;
    
    printf("Digite uma string: ");
    scanf("%s",nome);
    
    //contar o numero de vogais e consoantes na string
    for(i = 0;nome[i] !='\0'; i++){
        char caracterAtual = nome[i]; 
        // converter tudo pra minusculo
    
    //verificar se o caracter atual é uma vogal ou consoante
        if (caracterAtual >= 'a' && caracterAtual <= 'z'){
            if(caracterAtual =='a' || caracterAtual =='e' || caracterAtual=='i' || caracterAtual == 'o' || caracterAtual=='u'){
                cont_vogal++;
            }else{
                cont_consoante++;
            }
        }
    }
    printf("Palavra escolhida: %s\n",nome);
    printf("Numero de Vogais: %d\n",cont_vogal);
    printf("Numero de Consoantes: %d\n",cont_consoante);
    
    return 0;
}
