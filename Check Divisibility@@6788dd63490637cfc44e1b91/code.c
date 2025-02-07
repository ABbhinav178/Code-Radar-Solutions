#include <stdio.h>

int main() {
    int num, divisor;

    // Input the numbers

    scanf("%d", &num);


    scanf("%d", &divisor);

    // Check divisibility
    if (divisor == 0) {
        printf("Division by zero is not allowed.\n");
    } else if (num % divisor == 0) {
        printf("Divisible%d.\n", num, divisor);
    } else {
        printf("Not Divisible%d.\n", num, divisor);
    }

    return 0;
}