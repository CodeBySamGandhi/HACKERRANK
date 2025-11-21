#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void split(int n) {
  int num1= n/100;
  int num2= (n%100)/10;
  int num3= n%10;
  printf("%i %i %i",num1,num2,num3);
  return;
}
int main() {
  int a;
  scanf("%i", &a);
  split(a);
  return 0;
}
