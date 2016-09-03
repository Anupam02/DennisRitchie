#include <stdio.h>

typedef enum { false, true } bool;

/** program to print one word per line as per given input **/

int main () {
  int c;
  bool wordstarted;

  wordstarted = true;
  while ( ( c = getchar() ) != EOF ) {
    if ( c == ' ' || c == '\n' || c == '\t') {
      wordstarted = false;
    } else {

      if ( !wordstarted) {
	putchar('\n');
      }
      putchar(c);
      wordstarted = true;
    }
  }
  return 0;
}
