#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumLastDigits(int a,int b){
    int out=(a%10)+(b%10);
    return out;
}
int main() {
    int f,l;
    scanf("%i %i", &f,&l);
    int res=sumLastDigits(f,l);
    printf("The sum of last digits is: %d", res);   
    return 0;
}