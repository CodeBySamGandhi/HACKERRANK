#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n,low,high;
  scanf("%d",&n);
  scanf("%d",&low);
  scanf("%d",&high);
  (n>=low && n<=high)?printf("In Range"):printf("Out of Range");
  return 0;
  }
 