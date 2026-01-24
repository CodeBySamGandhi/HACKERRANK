#include <stdio.h>

int main() {
  int i,j,n;
  scanf("%d",&n);
  if (n<=2) {
    printf("Shape Not Possible");
  }
  else {
    for(i=1;i<=n;++i){    
      for(j=1;j<=n;++j){
        if(i==1 || i==n || j==1|| j==n){
          printf("*");
        }
        else{
          printf("#");
        }
      }
    printf("\n");
    }
  }
  
      
    return 0;
}