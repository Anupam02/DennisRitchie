#include <stdio.h>

typedef enum { false, true } bool;

/** program to replace multi blanks to single blank **/
int main() {
  int c;
  bool isblankencountered;

  isblankencountered = false;

  while ( ( c = getchar() ) != EOF ) {
    if ( c == ' ')  {
      if ( !isblankencountered ) {
	putchar(c); 
	isblankencountered = true;
      }
    }
    else {
      putchar(c);
      isblankencountered = false;
    }
  }
  return 0;
}
