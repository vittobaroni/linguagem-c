#include <stdio.h>

int main() {
  int vetor[5] = {10, 20, 30, 40, 50};
  int *P = vetor + 2;
  for(int i=0;i<3;i++){
    printf("%d\n", P[i]);
  }
}
