#include <stdio.h>
#include <math.h>

int main() 
   {
  int i,n;
    scanf("%d",&n);
   for(i=1 ; i<=n ; ++i)
   {
    printf("%.0f ", pow(i,2));
   }
    return 0;
   }