#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int dist( char char1,char char2) {
int diff=(char2-char1);
return diff;   
}
int main() {
char a,b;
scanf("%c %c", &a, &b);
int distance=dist(a,b);
printf("The distance between %c and %c is %d",a,b,distance);
return 0;
}
