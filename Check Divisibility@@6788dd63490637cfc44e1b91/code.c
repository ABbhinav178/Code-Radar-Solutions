#include <stdio.h>

int main() {
    int num, divisor;

    // Input the numbers
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Check divisibility
    if (num % divisor == 0) {
        printf("Divisible.\n");
    } 
    } else {
        printf("%d is not divisible by %d.\n", num, divisor);
    }

    return 0;
}