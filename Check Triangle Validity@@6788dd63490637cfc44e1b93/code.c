#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input three sides of a triangle
    printf("Enter the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the sides form a valid triangle
    if ((side1 + side2 > side3) &&
        (side1 + side3 > side2) &&
        (side2 + side3 > side1)) {
        printf("Valid\n");
    } 
    else {
        printf("Not Valid\n");
    }

    return 0;
}