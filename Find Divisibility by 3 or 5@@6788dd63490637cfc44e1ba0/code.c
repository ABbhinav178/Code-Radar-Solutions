#include <stdio.h>

int main() {
    int number;

    // Ask user for input

    scanf("%d", &number);

    // Check divisibility
    if (number % 3 == 0 && number % 5 == 0) {
        printf("divisible by both 3 and 5.\n", number);
    } else if (number % 3 == 0) {
        printf("divisible by 3.\n", number);
    } else if (number % 5 == 0) {
        printf("divisible by 5.\n", number);
    } else {
        printf(" not divisible by 3 or 5.\n", number);
    }

    return 0;
}