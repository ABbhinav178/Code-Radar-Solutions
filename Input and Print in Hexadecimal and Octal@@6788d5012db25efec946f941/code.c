#include <stdio.h>

int main() {
    int a;

    printf("Enter an integer: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Hexadecimal: %x\nOctal: %o\n", a, a);

    return 0;
}