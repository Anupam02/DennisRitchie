#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, *ptr, sum=0;
  printf("Please enter the value of n : ");
  scanf("%d",&n);
  ptr = (int*)malloc(n*sizeof(int));
  if(ptr==NULL) { // when can the ptr be null?
    printf("Error! memory not allocated.");
    exit(0);
  }
  printf("The elements of array just after malloc : ");
  for( i=0; i<n; i++) {
    printf("%d ",*(ptr+1));
  }
  printf("\n");
  printf("Enter elements of array: ");
  for( i=0; i<n; i++) {
    scanf("%d",ptr+i);
  }
  
  
  for( i=0; i<n; i++) {
    sum += *(ptr+i);
  }
  printf("Sum = %d\n", sum);
  free(ptr);
  return 0;
}
