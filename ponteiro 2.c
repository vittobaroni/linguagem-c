// Escreva uma função que receba uma variável inteira e uma variável float ambas
// por referência. Se o valor inteiro for par, divida-o por 2, caso contrário
// multiplique o valor float por 3.5.

#include <stdio.h>

float altera(int *x, float *y) {
  if (*x % 2 == 0) {
    *x /= 2;
  } else {
    *y *= 3.5;
  }
}

int main() {
  int u = 30;
  float v = 6.9;
  altera(&u, &v);
  printf("%d %g\n", u, v);
  altera(&u, &v);
  printf("%d %g\n", u, v);
}
