#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
  long long int n,i,b;
  
  printf("Please enter the decimal no : ");
  scanf("%d",&n);
  clock_t begin = clock();
  for ( i= ceil(log(n)/log(2.0)); i >= 0; i--) {
    b = pow(2,i);
    printf("%d",(b&n)/b);
  }
  clock_t end = clock();
  printf("\n");
  printf("cpu time taken = %ld\n",(double)((end-begin)/CLOCKS_PER_SEC));
  return 0;
}
