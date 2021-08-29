#include <stdio.h>

int main() {
  int T, V, R;
  scanf("%i %i %i", &T, &V, &R);
  int D = T*V;
  int L = D/R;
  printf("R = %i\nV = %i\nT = %i\nD = %i\nL = %i\n", R, V, T, D, L);
  return 0;
}