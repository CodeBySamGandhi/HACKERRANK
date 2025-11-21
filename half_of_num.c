#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float half(float num){
    float out=num/2;
    return out;
}
int main() {
    int a;
    scanf("%i",&a);
    float res= half(a);
    printf("Half of %i is %.2f", a,res);
    return 0;
}
