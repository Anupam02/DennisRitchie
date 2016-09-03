#include <stdio.h>

typedef enum { false, true } bool;

/** program to plot an histogram for word lengths , taken into 
    consideration that the largest word length is 10 **/

int main() {
  int c,i,j,wordlen,highestfreq;
  int wordfeq[10] = {0};
  bool wordstarted;
  
  wordlen = highestfreq = 0;
  wordstarted = true;
  while ( ( c = getchar() ) != EOF ) {
     if ( c == ' ' || c == '\n' || c == '\t') {
      wordstarted = false;
      ++wordfeq[wordlen];
    } else {
      if ( !wordstarted) {
	wordlen = 0;
      }
      ++wordlen;
      wordstarted = true;
    }
  }
  for( i=0; i<10; i++) {
    highestfreq = (highestfreq > wordfeq[i])?highestfreq : wordfeq[i];
  }
  printf("Highest frequency : %d\n",highestfreq);
  for (i = highestfreq; i > 0 ; i--) {
    for (j = 0; j < 10; j++) {
      if(wordfeq[j] < i) {
	putchar(' ');
	putchar(' ');
      } else {
	putchar('*');
	putchar(' ');
      }
    }
    putchar('\n');
  }
  for(i = 0; i < 10; i++) {
    printf("%d",i);
    putchar(' ');
  }
  putchar('\n');
  return 0;
}


  
