#include <stdio.h>

int main() {
  int maior=0, menor=0;
  int i, N=0, num=0;

  scanf("%i", &N);
  for(i=1; i<=N+1; i++){
    scanf("%i", &num);
    if(i==1){
      maior = num;
      menor = num;
      i++;
    }
    else if(num>maior){
      maior = num;
    } 
    else if(num<menor){
      menor = num;
    }
  }
  printf("MENOR = %i\nMAIOR = %i ", menor, maior);
  return 0;
}