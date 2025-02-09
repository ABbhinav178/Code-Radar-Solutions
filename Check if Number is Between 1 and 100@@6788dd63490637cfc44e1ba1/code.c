#include <stdio.h>

int main() {
    int number;

    // Ask user for input

    scanf("%d", &number);

    // Check if the number is within the range
    if (number >= 1 && number <= 100) {
        printf("In Range\n", number);
    } else {
        printf("Out of Range\n", number);
    }

    return 0;
}