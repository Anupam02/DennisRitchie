#include <stdio.h>

/** program to count blanks tabs and newlines **/

int main () {
  int c,nb,nt,nl;

  nb = 0; nt = 0; nl = 0;
  while ( ( c = getchar() ) != EOF ) {
    if ( c == '\n') ++nl;
    else if ( c == ' ') ++nb;
    else if ( c == '\t') ++nt;
  }
  printf("total no. of lines  : %d\n",nl);
  printf("total no. of blanks : %d\n",nb);
  printf("total no. of tabs   : %d\n",nt);
  return 0;
}
