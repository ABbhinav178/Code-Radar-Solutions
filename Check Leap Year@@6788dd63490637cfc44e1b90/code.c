#include <stdio.h>

int main() {
    int year;

    // Input the year

    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n", year);
    } else {
        printf("Not a Leap year\n", year);
    }

    return 0;
}