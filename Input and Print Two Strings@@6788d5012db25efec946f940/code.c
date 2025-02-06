
#include <stdio.h>

int main() {
    char str1[100], str2[100]; // Declare arrays to hold the strings

    printf("Enter the first string: ");
    scanf("%99s", str1);  // Read the first string
    printf("Enter the second string: ");
    scanf("%99s", str2);  // Read the second string

    printf("\nYou entered:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}