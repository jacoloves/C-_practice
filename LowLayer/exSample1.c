#include <stdio.h>

int main() {
  Push(123);
  Push(456);
  Push(789);

  int j = Pop();
  int k = Pop();
  int l = Pop();

  printf("%d\n", j);
  printf("%d\n", k);
  printf("%d\n", l);

  return 0;
}
