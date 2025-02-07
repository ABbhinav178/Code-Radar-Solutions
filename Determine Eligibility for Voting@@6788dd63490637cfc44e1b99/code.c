#include <stdio.h>

int main() {
    int age;

    // Input age

    scanf("%d", &age);

    // Check eligibility
    if (age >= 18) {
        printf("Eligible \n");
    } 
    else if (age >= 0) {
        printf("Not eligible \n");
    } 
    else {
        printf("Invalid age\n");
    }

    return 0;
}