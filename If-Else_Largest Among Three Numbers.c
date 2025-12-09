#include <stdio.h>

int main() {
  int a,b,c;
  scanf("%i %i %i",&a,&b,&c);
  if (a>b && a>c){
    printf("The largest number is : %d",a);
  }
  else if(b>a && b>c)
  {
    printf("The largest number is : %d",b);
  }
  else
  {
    printf("The largest number is : %d",c);
  }
       
    return 0;
  }