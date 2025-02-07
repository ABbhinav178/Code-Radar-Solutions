#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input three sides of a triangle

    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the sides form a valid triangle
    if ((side1 + side2 > side3) &&
        (side1 + side3 > side2) &&
        (side2 + side3 > side1)) {
        printf("Valid\n");
    } 
    else {
        printf("Invalid\n");
    }

    return 0;
}