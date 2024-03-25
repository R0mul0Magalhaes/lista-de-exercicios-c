#include <stdio.h>

int main(){

  float metros;

  printf("Digite os metros: ");
  scanf("%f", &metros);

  printf("Decímetros: %.1f dm\n", metros*10);
  printf("Centímetros: %.1f cm\n", metros*100);
  printf("Milímetros: %.1f mm\n", metros*1000);

  return 0;
}