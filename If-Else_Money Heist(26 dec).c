#include <stdio.h>

int main() {  
  int a,b,c,d,e,f,g,h,i,j;
  int num1,num2,num3;
  int pos1,pos2,pos3;
  scanf("%i %i %i %i %i %i %i %i %i %i",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
  scanf("%i %i %i %i %i %i",&pos1,&num1,&pos2,&num2,&pos3,&num3);
  if (pos1==0) {
    a=(a+num1)%10;
  }
  else if (pos1==1) {
    b=(b+num1)%10;
  }
  else if (pos1==2){
    c=(c+num1)%10;
  }
  else if(pos1==3){
    d=(d+num1)%10;
  }
  else if(pos1==4){
    e=(e+num1)%10;
  }
  else if(pos1==5){
    f=(f+num1)%10;
  }
  else if(pos1==6){
    g=(g+num1)%10;
  }
  else if(pos1==7){
    h=(h+num1)%10;
  }
  else if(pos1==8){
    i=(i+num1)%10;
  }
  else if(pos1==9){
    j=(j+num1)%10;
  }
  
  
  if (pos2==0) {
    a=(a+num2)%10;
  }
  else if (pos2==1) {
    b=(b+num2)%10;
  }
  else if (pos2==2){
    c=(c+num2)%10;
  }
  else if(pos2==3){
    d=(d+num2)%10;
  }
  else if(pos2==4){
    e=(e+num2)%10;
  }
  else if(pos2==5){
    f=(f+num2)%10;
  }
  else if(pos2==6){
    g=(g+num2)%10;
  }
  else if(pos2==7){
    h=(h+num2)%10;
  }
  else if(pos2==8){
    i=(i+num2)%10;
  }
  else if(pos2==9){
    j=(j+num2)%10;
  }
  
  
  if (pos3==0) {
    a=(a+num3)%10;
  }
  else if (pos3==1) {
    b=(b+num3)%10;
  }
  else if (pos3==2){
    c=(c+num3)%10;
  }
  else if(pos3==3){
    d=(d+num3)%10;
  }
  else if(pos3==4){
    e=(e+num3)%10;
  }
  else if(pos3==5){
    f=(f+num3)%10;
  }
  else if(pos3==6){
    g=(g+num3)%10;
  }
  else if(pos3==7){
    h=(h+num3)%10;
  }
  else if(pos3==8){
    i=(i+num3)%10;
  }
  else if(pos3==9){
    j=(j+num3)%10;
  }
  printf("%i %i %i %i %i %i %i %i %i %i \n",a,b,c,d,e,f,g,h,i,j);
  return 0;
}
