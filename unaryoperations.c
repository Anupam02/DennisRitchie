#include <stdio.h>

int main() {
  int a, b;
  scanf("%d%d",&a,&b);
  printf("%6d -> a&b\n",a&b);
  printf("%6d -> a|b\n",a|b);
  printf("%6d -> ~a\n",~a);
  printf("%6d -> ~b\n",~b);
  return 0;
}
