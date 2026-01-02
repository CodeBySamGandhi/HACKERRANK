#include <stdio.h>

int main() {

    int n;
  scanf("%d",&n);
  if(n<=1){
    printf("Shape Not Possible");
  }
  else {
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        if(j==1 || j==i){
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      printf("\n");
    }
    for(int i=1;i<=n-1;i++){
      for(int j=1;j<=n-i;j++){
        if(j==1 || j==n-i) {
          printf("*");
        }
        else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }
  
  
    return 0;
}