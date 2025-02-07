#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Input marks
    printf("Enter marks (0 to 100): ");
    scanf("%d", &marks);

    // Determine grade using if-else
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } 
    else if (marks >= 80) {
        grade = 'B';
    } 
    else if (marks >= 70) {
        grade = 'C';
    } 
    else if (marks >= 60) {
        grade = 'D';
    } 
    else {
        grade = 'F';
    }

    // Output grade
    if (marks >= 0 && marks <= 100) {
        printf("Grade: %c\n", grade);
    } else {
        printf("Invalid marks entered.\n");
    }

    return 0;
}