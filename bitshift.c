#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  printf("%8d -> a>>1\n",a>>1);
  printf("%8d -> a>>1\n",a>>1);
  a = a>>1;
  printf("%8d -> a>>1\n",a>>1);
  printf("%8d -> a>>1\n",a>>1);
  printf("%8d -> a<<1\n",a<<1);
  printf("%8d -> a<<1\n",a<<1);
  a = a<<1;
  printf("%8d -> a<<1\n",a<<1);
  printf("%8d -> a<<1\n",a<<1);
  printf("%8d -> a<<1\n",a<<1);
  
  
  return 0;
}
