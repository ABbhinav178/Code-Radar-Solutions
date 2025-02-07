#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input three sides of the triangle

    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if it is a valid triangle
    if ((side1 + side2 > side3) &&
        (side1 + side3 > side2) &&
        (side2 + side3 > side1)) {

        // Determine the type of triangle
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral \n");
        } 
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Isosceles \n");
        } 
        else {
            printf("Scalene \n");
        }
    } 
    else {
        printf("Invalid Triangle\n");
    }

    return 0;
}