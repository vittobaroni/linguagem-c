//Escreva uma função que recebe um inteiro N e um vetor V de N elementos e 
//retorna um vetor alocado dinamicamente contendo N valores inteiros dados por

#include <stdio.h>
#include <stdlib.h>

// int* sequencia(int N){ // da erro se N for negativo ( nao conseguir puxar memoria)
//   if (N<=0) {
//     return NULL;
//   }
//   int* v = (int*)malloc(N*sizeof(int)); //aloca memoria
  
//   if ( v == NULL){
//     return NULL;
//   }
//   for(int i = 0; i < N; i++){
//     v[i] =i+1 ; // atribui o valor i + 1 ao i ésimo elemento do vetor
//   }
//   return v;
// }
// int main(){
//  int* v = sequencia(100);
//  for(int i = 0; i < 100; i++){
//   printf("%d ", v[i]);
//  }
// free(v);
// }

int* sequencia(int N){
  if(N<=0){
    return NULL;
  }
  int* v = (int*)malloc(N*sizeof(int));
  if(v == NULL){
    return NULL;
  }
  for(int i = 0; i < N; i++){
    v[i] = i + 1;
  }
  return v;
}

int* quadrados(int N,int v[N]){
  if(N<=0){
    return NULL;
  }
  int*u = (int*)malloc(N*sizeof(int));
  if(u == NULL){
    return NULL;
  }
  for(int i = 0; i < N; i++){
    u[i] = v[i]*v[i];
  }
  return u;
}


int main(){
 int* v = sequencia(100);
 int* u = quadrados(100, v);
 for(int i = 0; i < 100; i++)
 printf("%d : %d\n", u[i], v[i]);
 free(v);
 free(u);
}
