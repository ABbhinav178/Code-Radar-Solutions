#include <stdio.h>

int main() {
    int num, divisor;

    // Input the numbers
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Check divisibility
    if (divisor == 0) {
        printf("Division by zero is not allowed.\n");
    } else if (num % divisor == 0) {
        printf("Divisible by %d.\n", num, divisor);
    } else {
        printf("Not Divisible by %d.\n", num, divisor);
    }

    return 0;
}