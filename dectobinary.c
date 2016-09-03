#include <stdio.h>
#include <math.h>

int main() {
  int n,i,b;
  printf("Please enter the decimal no : ");
  scanf("%d",&n);
  for ( i= ceil(log(n)/log(2.0)); i >= 0; i++) {
    b = pow(2,i);
    printf("%d",b&n);
  }
  printf("\n");
  return 0;
}
