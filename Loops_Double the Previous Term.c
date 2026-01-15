#include <stdio.h>
#include<math.h>

int main() {

    int n, i;
  scanf("%d %d", &n, &i);
  if(n<=0){
      return 0;
    }
  printf("<");
  for(int i=0;i<=n-1;++i){
    printf("%.0f",pow(2,i));
    if(i<n-1){
      printf(" ");
    }
  }
   printf(">");
    return 0;
}