#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  printf("%8d -> integer\n",a);
  printf("%8o -> octal\n",a);
  printf("%8x -> hexadecimal\n",a);
  return 0;
}
