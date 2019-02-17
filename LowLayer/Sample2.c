#include <stdio.h>

void main() {

  int sum;
  int i;

  sum = 0;

  for(i = 1; i <= 100; i++) {
    sum += 1;
  }

  sum /= 10;

  printf("%dIn", sum);
}
