#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%i %i %i", &a, &b, &c);
  if(a+b>c && a+c>b && b+c>a){
    if(a==b && a==c){
      printf("TRIANGULO EQUILATERO\n");
    }
    else
    if(a==b || b==c || c==a){
      printf("TRIANGULO ISOSCELES\n");
    }
    else{
      printf("TRIANGULO ESCALENO\n");
    }
  }
  else{
    printf("OS LADOS NAO FORMAM UM TRIANGULO");
  }
   return 0;
}