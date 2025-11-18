#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char charLower,charUpper;
    scanf("%c", &charLower);
    charUpper= charLower-32;
    printf ("The uppercase of %c is %c", charLower,charUpper);/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}