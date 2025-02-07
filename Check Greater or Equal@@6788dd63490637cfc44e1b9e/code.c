#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Compare the numbers
    if (num1 >= num2) {
        printf("YES\n");
    } 
    else {
        printf("NO\n");
    }

    return 0;
}