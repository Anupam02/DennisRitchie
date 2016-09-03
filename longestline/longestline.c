#include <stdio.h>

/** program to print the longest line taken into consideration
    that longest line is of 100 characters.
    my version Sat Sep 3 09:20:55 IST 2016
*/

/** function declaration */
void copy(char *current_line , char *longest_line );

int main() {
  int c,i, len, max_len;
  char current_line[100], longest_line[100];

  max_len = len = i=0;
  while ( ( c = getchar() ) != EOF) {
    if( c == '\n') {
      if ( len > max_len ) {
	current_line[i++] = '\0';
      }
      copy(current_line, longest_line);
      i = 0;
      len = 0;
    } else {
      current_line[i] = c;
      ++i;
      ++len;
    }
  }
  
  for ( i = 0; longest_line[i] != '\0'; i++ ) printf("%c",longest_line[i]);
  printf("\n");
  return 0;
}

void copy(char * current_line, char * longest_line ) {
  int i;
  for ( i = 0; current_line[i] != '\0'; i++ ) {
    longest_line[i] = current_line[i];

  }
  longest_line[i] = current_line[i];
}
