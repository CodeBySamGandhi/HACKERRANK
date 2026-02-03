#include <stdio.h>

int main() {
  int s;
  scanf("%d",&s);
  char class;
  if((s%2==0) && (s%3==0) && (s%5!=0)){
    class='A'; 
  }
  else if((s==2*11)||(s==3*7)||(s==3*11)||(s==5*7)||(s==5*11)||(s==7*11)){
    class='B';
  }
  else if(((s>9)&&(s<100))&&(((s%3==0)&&(s%7!=0))||((s%3!=0)&&(s%7==0)))){
    class='C';
  }
  else if((s==1) || (s==4) || (s==9) || (s==16) || (s==25) || (s==36 )|| (s==49) || (s==64) || (s==81) || (s==100) || (s==121) || (s==144) || (s==169) || (s==196)){
    class='D';
  }
  else{
    class='E';
  }
  
  printf("%c",class);

        
    return 0;
}
