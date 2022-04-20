#include <stdio.h>

int main() {
  int cases, caseno;
  scanf("%d", &cases);
  for (caseno = 1; caseno <= cases; ++caseno) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Case %d: %d\n", caseno, a + b);
  }
  return 0;
}
