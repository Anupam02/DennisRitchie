#include <stdio.h>
#include <assert.h>
#include <math.h>

/* function declartion */
float celsiustofahr(float celsius);

/* program to convert celsius to fahreinheit */
int main() {
 
  assert(celsiustofahr(0)==32);
  assert(celsiustofahr(100)==212.0);
  //  assert(printf("%.2f",celsiustofahr(-17.77))=="0.01");

  
  return 0;
}

float celsiustofahr(float celsius) {
  /** function to convert celsius to fahreinheit */
  /** correct upto 2 decimal places afer decimal */
  /** float rounded_down = floorf(value*100)/100;
      float nearest      = round(value*100)/100;
      float rounded_up   = ceilf(value*100)/100;
  */
  float fahr = (9.0/5)*celsius + 32;
  return round(fahr*100)/100;
}
