#include <stdio.h>

int main() {
   float a, b, c, d;
   scanf("%f %f %f %f", &a, &b, &c, &d);
   if(((a+b+c+d)/4)>=6){
    printf("NOTA = %.1f (APROVADO)", (a+b+c+d)/4);
   }
   else{
    printf("NOTA = %.1f (REPROVADO)", (a+b+c+d)/4);
   }
   return 0;
}