#include <stdio.h>
#include <stdbool.h>

int main() {
    int number, i;
    bool isPrime = true;

    // Ask user for input
    scanf("%d", &number);

    if (number <= 1) {
        printf("Not Prime number.\n", number);
        return 0;
    }

    // Check divisibility up to the square root of the number
    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        printf("Prime\n", number);
    } else {
        printf("Not Prime \n", number);
    }

    return 0;
}