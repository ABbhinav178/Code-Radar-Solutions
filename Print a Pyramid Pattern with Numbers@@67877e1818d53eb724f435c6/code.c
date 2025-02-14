#include <stdio.h>

int main() {
    int n, i, j, num;


    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print increasing numbers
        num = 1;
        for (j = 1; j <= (2 * i - 1); j++) {
            printf(" %d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}