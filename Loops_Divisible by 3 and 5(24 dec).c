#include <stdio.h>

int main() {
  int i;
  for(int i=1 ; i <= 100 ; ++i){
    if((i%3==0) && (i%5==0)){
      printf("%d\n", i);
    }
  }
  return 0;
}