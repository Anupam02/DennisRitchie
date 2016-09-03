#include <stdio.h>
#include <time.h>

/** to try for effect of while ( c = getchar() != EOF ) instead of 
    while ( ( c = getchar() ) != EOF ) **/
int main() {
  int c;
  
  while ( c = getchar() != EOF ) {
    putchar(c);
  }
  return 0;
}
