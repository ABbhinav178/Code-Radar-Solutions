#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;

    // Input two numbers

    scanf("%d %d", &num1, &num2);

    // Check if num1 is the square of num2
    if (num1 == num2 * num2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}