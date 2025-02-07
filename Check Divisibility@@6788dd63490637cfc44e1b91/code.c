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
        printf("%d is divisible by %d.\n", num, divisor);
    } else {
        printf("%d is not divisible by %d.\n", num, divisor);
    }

    return 0;
}