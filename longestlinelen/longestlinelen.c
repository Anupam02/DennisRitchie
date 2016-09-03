#include <stdio.h>

/** program to determine the length of longest line 
    entered .
    It is my version Sat Sep 3 09:11:57 IST 2016
*/

int main() {
  int c, max_len,len;

  max_len = len = 0;
  while( ( c = getchar() ) != EOF) {
    max_len = (max_len > len) ? max_len : len;
    if( c == '\n') len = 0;
    ++len;
  }
  printf("longest line length = %d\n",max_len);
  return 0;
}
