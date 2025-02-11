#include <stdio.h>

int main() {
    int height, i, j, k;

    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        // Print spaces
        for (j = i; j < height; j++) {
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
