#include <stdio.h>

typedef enum {false, true } bool;

/** program to determine the no of words based on the loose definition
    that a word is any sequence of characters that does not contain a
    blank, tab or newline. **/

int main() {
  int c,nw;
  bool wordstarted;

  nw = 0; wordstarted = false;
  while ( ( c = getchar() ) != EOF ) {
    if ( c == ' ' || c == '\n' || c == '\t') {
      /** alternative code just compare 
	  if ( wordstarted ) 
	    wordstarted = false;
      **/
      wordstarted = false;
    } else {
      if(!wordstarted) {
	++nw; 
      }
      wordstarted = true;
    }
  }
  printf("total no of words : %d\n",nw);
  return 0;
}
