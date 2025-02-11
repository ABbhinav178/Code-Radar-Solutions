#include <stdio.h>

int main() {
    int height, i, j;

    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        // Print spaces
        for (j = 1; j <= height - i; j++) {
            printf("  ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}