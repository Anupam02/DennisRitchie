#include <stdio.h>

/** program to determine no of digits , white characters, and other 
    characters **/

int main() {
  int c, i, nwhite, nother;
  int ndigits[10] = {0};
  
  nwhite = nother = 0;
  while ( ( c = getchar() ) != EOF ) {
    if( c >= '0' && c <= '9') {
      ++ndigits[c-'0'];
    } else if ( c == ' ' || c == '\t' || c == '\n') {
      ++nwhite;
    } else {
      ++nother;
    }
  }
  for( i = 0; i < 10; i++ ) {
    printf("%d -> %d\n",i,ndigits[i]);
  }
  printf("nwhite -> %d\nnother -> %d\n", nwhite, nother);
  return 0;
}
