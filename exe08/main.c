#include <stdio.h>

int main(){
  int num;
  while(num!=0){
    scanf("%i", &num);
    if(num>0){
      printf("POSITIVO\n");
    }
    if(num<0){
      printf("NEGATIVO\n");
    }
  }
  return 0;
}