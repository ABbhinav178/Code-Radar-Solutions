#include <stdio.h>

int main() {
    int age;

    // Input the user's age

    scanf("%d", &age);

    // Check eligibility
    if (age >= 60) {
        printf("Eligible\n");
    } 
    else if (age >= 0) {
        printf("Not Eligible\n");
    } 
    else {
        printf("Invalid Age\n");
    }

    return 0;
}