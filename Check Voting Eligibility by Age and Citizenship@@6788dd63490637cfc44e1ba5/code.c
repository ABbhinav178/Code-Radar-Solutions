#include <stdio.h>

int main() {
    int age, citizenStatus;

    // Input age and citizenship status

    scanf("%d", &age);
    

    scanf("%d", &citizenStatus);

    // Check voting eligibility
    if (age >= 18 && citizenStatus == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible \n");
    }

    return 0;
}