#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int buildNumber(int a,int b,int c ,int d){
  int out= ((a*1000)+ (b*100)+ (c*10)+ (d*1))*5;
  return out;
}
int main() {
  int num1,num2,num3,num4;
  scanf("%i %i %i %i", &num1, &num2, &num3, &num4);
  int res = buildNumber (num1,num2,num3,num4);
  printf("The number is: %i ", res);
  return 0;
}
