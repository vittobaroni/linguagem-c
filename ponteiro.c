#include <stdio.h>

int main() {
    int x = 16; // Declara uma variável inteira x e atribui o valor 10 a ela
    int *ptr;   // Declara um ponteiro para um inteiro

    ptr = &x;   // Atribui o endereço de x ao ponteiro ptr

    printf("O valor de x: %d\n", x);       // Imprime o valor de x
    printf("O valor apontado por ptr: %d\n", *ptr); // Imprime o valor apontado por ptr

    return 0;
}
