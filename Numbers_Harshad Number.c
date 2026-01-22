#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n; 
  int sum = 0;

    scanf("%d", &n);

    for (int i = n; i > 0; i /= 10) 
{
      sum = sum + (i % 10);
}

      if (n % sum == 0)
        printf("%d is a harshad number", n);
      else
        printf("%d is not a harshad number", n);
   return 0;
}
