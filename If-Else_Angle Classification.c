#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int x, angle;
    scanf("%d",&x);
     
    if(x==0){
       printf("Acute Angle");
        return 0;
    } 
        angle = x % 360;
  
    if (angle == 0){
        printf("Full Rotation");
    }
    else if (angle < 90) {
        printf("Acute Angle");
    }
    else if (angle == 90) {
        printf("Right Angle");
    }
    else if (angle > 90 && angle < 180) {
        printf("Obtuse Angle");
    }
    else if (angle == 180) {
        printf("Straight Angle");
    }
    else  if (angle>180 && angle<360){
        printf("Reflex Angle");
    }

    return 0;
    }