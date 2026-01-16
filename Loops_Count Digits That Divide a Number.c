#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y,z; 
    int count = 0;

    scanf("%d", &x);

    for ( y = x; y > 0; y = y/10) {
         z = y % 10;
        if (x % z == 0) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
