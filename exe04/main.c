#include <stdio.h>

int main() {
  int a, b, c;
  int maior=0, menor=0;
  scanf("%i %i %i", &a, &b, &c);

  if(a>=b && b>=c){
    maior=a;
    menor=c;
  }
  if(a>=c && c>=b){
    maior=a;
    menor=b;
  }
  if(b>=a && a>=c){
    maior=b;
    menor=c;
  }
  if(b>=c && c>=a){
    maior=b;
    menor=a;
  }
  if(c>=b && b>=a){
    maior=c;
    menor=a;
  }
  if(c>=a && a>=b){
    maior=c;
    menor=b;
  }
   printf("MENOR = %i\nMAIOR = %i", menor, maior);
   return 0;
}