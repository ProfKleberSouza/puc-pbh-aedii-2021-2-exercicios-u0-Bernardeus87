#include <stdio.h>

int main(){
  int N;
  scanf("%i", &N);
  if(N > 0 && N%2 == 0){
    printf("NUMERO PAR POSITIVO\n");
  }

  if(N > 0 && N%2 == 1){
    printf("NUMERO IMPAR POSITIVO\n");
  }
  
  if(N < 0 && N%2 == 0){
    printf("NUMERO PAR NEGATIVO\n");
  }
  
  if(N < 0 && N%2 != 0){
    printf("NUMERO IMPAR NEGATIVO\n");
  }
  if(N == 0){
    printf("NUMERO NEUTRO\n");
  }
return 0;
}