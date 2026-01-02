#include <stdio.h>

int main() {
  int i,j,n;
  
  scanf("%d",&n);
  if (n<=1) {
    printf("Shape Not Possible");
  }
  else {
    for(i=1;i<=n;++i){
    for(j=2;j<=(n-i+1);j++){
      printf(" ");
    }
    for(int k=1;k<=2*i-1;++k){
      
      printf("*");
    }
    printf("\n");
    
  }
  }
  return 0;
}