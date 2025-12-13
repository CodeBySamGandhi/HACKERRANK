#include <stdio.h>

int main() {
  
 float income;
  scanf("%f",&income);
  if(income>=0)
  { 
    if(income<=250000){
    income = 0;
   }
  else if(income<=500000){
   income=(income-250000)*0.05;
  }
  else if(income<=1000000){
    income=(250000*0.05)+(income-500000)*0.20;
  }
  else if(income>1000000){
    income=(250000*0.05)+(500000*0.20)+(income-1000000)*0.30;
  }
  }
  else{
    printf("INVALID");
      return 0;
  }
 
  printf("%.2f",income);
    return 0;
}