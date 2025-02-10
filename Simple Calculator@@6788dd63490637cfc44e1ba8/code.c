#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber;
    

    scanf("%c", &operator);

    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            if (secondNumber != 0.0) {
                printf("%.2lf / %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber / secondNumber);
            } else {
                printf("Error\n");
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
    }

    return 0;
}
