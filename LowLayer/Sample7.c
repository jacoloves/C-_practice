#include <stdio.h>

int main () {
  const int limit = 500;
  const itn * const cpci = &limit;
  const int * const * pcpi = &cpci;

  printf("%d\n", *cpci);
  pcpci = &cpci;
  printf("%d\n", **pcpci);

  return 0;
}
