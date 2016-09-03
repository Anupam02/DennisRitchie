#include<stdio.h>
#include<assert.h>

/* function declaration */
int power(int , int );

/** program to calculate the power of a given number **/
int main() {
 
  /* test cases */
  assert(power(2,1)==2);
  assert(power(2,5)==32);
  assert(power(3,2)==9);
  assert(power(3,4)==81);
  assert(power(5,1)==5);
  assert(power(5,2)==25);
  

  return 0;
}

/* function definition */
int power(int m, int n) {
  int i, p;

  p = 1;
  for( i=1; i <= n; i++) 
    p *= m;

  return p;
}
