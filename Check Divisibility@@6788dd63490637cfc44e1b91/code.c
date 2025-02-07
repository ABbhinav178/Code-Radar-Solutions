#include <stdio.h>

int main() {
    int num, divisor;

    // Input numbers
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Check divisibility
    if (num % divisor == 0) {
        printf("Divisible\n");
    } 
    else {
        printf("Not Divisible\n");
    }

    return 0;
}
