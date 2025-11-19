#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int toSeconds(int hours, int minutes, int seconds) {
    int sec=(hours*3600)+(minutes*60)+(seconds*1);
    return sec;
}
int main() {
    int hr,min,sec;
    scanf("%i %i %i", &hr,&min,&sec);
    int res=toSeconds(hr,min,sec);
    printf("Total seconds: %i",res);
    return 0;
}
