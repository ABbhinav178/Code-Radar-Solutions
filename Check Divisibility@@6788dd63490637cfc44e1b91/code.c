#include <stdio.h>

int main() {
    int num, divisor;
    scanf("%d", &num);
    scanf("%d", &divisor);

    if (num % divisor == 0) {
        printf("Divisible\n");
    } 
    else {
        printf("Not Divisible\n");
    }

    return 0;
}
