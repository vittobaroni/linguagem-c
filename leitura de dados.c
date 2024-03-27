#include <stdio.h>
int main(){
    char c;
    char nome[50];
    char frase[150];
    scanf("%s", nome); // Lê até encontrar um espaço em branco
    scanf(" %c", &c); // Atenção ao espaço antes do %c
    scanf(" %[^\n]", frase); // Lê até o final da linha
    printf("c = %c\n", c);
    printf("nome = %s\n", nome);
    printf("frase = %s\n", frase);
}
