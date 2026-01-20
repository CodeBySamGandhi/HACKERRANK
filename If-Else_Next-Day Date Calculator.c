#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int day, month, year;
    int maxDay;

    scanf("%d %d %d", &day, &month, &year);

     if (month == 2) {
       
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            maxDay = 29;
        }
         else {
            maxDay = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDay = 30;
    }
    else {
        maxDay = 31;
    }

   
    if (maxDay > day) {
        day = day + 1;
    } 
    else {
        day = 1;
        if (month < 12) {
            month = month + 1;
        } 
        else {
            month = 1;
            year = year + 1;
        }
    }

   
    printf("%02d-%02d-%d", day, month, year);

    return 0;
}