#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char* vote(int a){
  char* e=(a>=18)?(e="Eligible") :(e="Not Eligible");
  return e;
}
int main() {
  int age;
  scanf("%i", &age);
  char* elig=vote(age);
  printf("%s",elig);
  return 0;
}