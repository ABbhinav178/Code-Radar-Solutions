#include <stdio.h>

int main() {
    int number;

    // Input a number

    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("Positive\n");
    } else if (number < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}