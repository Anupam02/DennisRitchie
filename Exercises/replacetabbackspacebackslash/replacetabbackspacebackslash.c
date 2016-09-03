#include <stdio.h>

/** program to replace tabs with \t backspace with \b and backslash \ with \\ **/

int main() {
  int c;

  while ( ( c = getchar() ) != EOF ) {
    if ( c == '\t' )  {
      putchar('\\');
      putchar('t');
    } else if ( c == '\b') {  /** to enter backspace try C-H , ctrl+H **/
      putchar('\\');
      putchar('b');
    } else if ( c == '\\') {
      putchar('\\');
      putchar('\\');
    } else {
      putchar(c);
    }
  }
  return 0;
}

