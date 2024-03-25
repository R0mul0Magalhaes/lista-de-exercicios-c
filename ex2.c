#include <stdio.h>

int main(){

  int i=1;

  for (i = 1; i <= 9; i++) {
    printf("Tabuada do %d\n", i);
    int j=1;
    for (j = 1; j <= 10; j++) {
      printf("%d x %d = %d\n", i, j, i*j);
    }
    printf("\n");
  }

  return 0;
}
