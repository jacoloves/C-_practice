#include <stdio.h>

int main() {
  // ポインタテスト
  char *names[] = {"1", "2", "3"};
  printf("%c\n", *(*(names+1)+2));
  printf("%c\n", names[1][2]);
}
