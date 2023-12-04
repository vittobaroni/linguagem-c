//contador de caracter de string
int main() {
    char minhaString[100];
    int contador = 0;

    // Solicitar ao usuário para inserir uma string
    printf("Digite uma string: ");
    scanf("%s", minhaString);

    // Contar o número de caracteres na string
    while (minhaString[contador] != '\0') {
        contador++;
    }

    // Exibir o número de caracteres
    printf("O número de caracteres na string é: %d\n", contador);

    return 0;
}
