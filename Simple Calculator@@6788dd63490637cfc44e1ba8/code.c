#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input the operator and two operands

    scanf(" %c", &operator);


    scanf("%lf %lf", &num1, &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("error\n");
    }

    return 0;
}