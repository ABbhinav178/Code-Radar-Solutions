#include <stdio.h>

int main() {
    int num, divisor;

    // Input the numbers

    scanf("%d", &num);


    scanf("%d", &divisor);

    // Check divisibility
    if (divisor == 0) {
        printf("Divisible\n");
    } else if (num % divisor == 0) {
        printf("Not Divisible%d.\n", num, divisor);
    } else {
        printf("Not Divisible%d.\n", num, divisor);
    }

    return 0;
}