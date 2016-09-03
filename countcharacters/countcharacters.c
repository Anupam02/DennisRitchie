#include <stdio.h>

/** count no of chars in input version1 **/
int main() {
  long nc;
  
  nc = -1;
  while (getchar() != EOF ) {
    ++nc;
  }
  printf("%ld\n", nc);
  return 0;
}
