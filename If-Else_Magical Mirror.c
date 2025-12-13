#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  int case1= (a>10 && (a%2==0));
  int case2= (a>15 && (a%3==0));
  int case3= (a%7==0);
  int count = case1 + case2 + case3;
  if(a>0){
  if(count==3){
  printf("The verdict for the number %d is: SUPERNATURAL",a);
  }
  else if(count==2){
    printf("The verdict for the number %d is: MIRACULOUS",a);
    }
  else if(count==1){
    printf("The verdict for the number %d is: MAGICAL",a);
     }
  else if(count==0){
     printf("The verdict for the number %d is: NORMAL",a);
  }
}
  else{
     printf("The verdict for the number %d is: INVALID",a);
  }

    
  
  
  
  
  
    return 0;
}