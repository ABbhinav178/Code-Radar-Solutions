#include <stdio.h>

int main() {
    int a, b;
    // Read two integers
    scanf("%d %d", &a, &b);

    // Check if the first number is greater than the second
    if (a > b) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}