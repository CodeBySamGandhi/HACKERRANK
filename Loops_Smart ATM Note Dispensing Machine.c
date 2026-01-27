#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int A;
int x = 0, y = 0, z = 0;

    scanf("%d", &A);

if (A <= 0) {
  printf("Invalid amount");
   return 0;
}

for (; A >= 500; A = A - 500) 
{
 x++;
}

    for (; A >= 200; A = A - 200) 
{
 y++;
}

for (; A >= 100; A = A - 100) 
{
 z++;
}

    printf("500-rupee notes: %d\n", x);
    printf("200-rupee notes: %d\n", y);
    printf("100-rupee notes: %d\n", z);

      
return 0;
}
