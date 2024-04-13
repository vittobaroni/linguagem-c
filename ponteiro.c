#include <stdio.h>

int main() {
    int x = 16; // Declara uma variável inteira x e atribui o valor 10 a ela
    int *ptr;   // Declara um ponteiro para um inteiro

    ptr = &x;   // Atribui o endereço de x ao ponteiro ptr

    printf("O valor de x: %d\n", x);       // Imprime o valor de x
    printf("O valor apontado por ptr: %d\n", *ptr); // Imprime o valor apontado por ptr

    return 0;
}

// se declarar um ponteiro e apontar para x, e no printf voce colocar apenas p , ele ira imprimir o endereço da memoria de x
// agora, se colocar no printf *p, irá imprimir o valor de x
