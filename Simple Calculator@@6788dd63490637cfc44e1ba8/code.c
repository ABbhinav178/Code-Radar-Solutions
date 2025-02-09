#include <stdio.h>

int main() {
    double num1, num2;
    char operator;


    scanf("%lf %c %lf", &num1, &num2, &operator);

    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("error\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}