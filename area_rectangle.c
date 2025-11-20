#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int area(int length, int width) {
    int out=(length*width);
    return out;
}
int main() {
    int l,b;
    scanf("%i %i",&l, &b);
    int res=area(l,b);
    printf("The area is: %d units",res);  
    return 0;
}
