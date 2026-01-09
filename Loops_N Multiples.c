#include <stdio.h>

int main() {
  
  int x,y;
  scanf("%d %d", &x, &y);
  for(int i=1;i<=x;++i){
    printf("%d ", y*i);
    
  }

        
    return 0;
}