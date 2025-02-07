#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers

    scanf("%d %d", &num1, &num2);

    // Check if num1 is a multiple of num2
    if (num2 != 0 && num1 % num2 == 0) {
        printf("Yes\n");
    } 
    else {
        printf("No\n");
    }

    return 0;
}