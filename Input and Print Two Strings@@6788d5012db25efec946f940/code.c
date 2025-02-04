#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%99s", str1);

    printf("Enter the second string: ");
    scanf("%99s", str2);

    printf("\nYou entered:\n");
    printf("%s\n", str1);
    printf(" %s\n", str2);

    return 0;
}