#include <stdio.h>

int main() {
    int n, i, j;
    char ch;


    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print increasing alphabets
        ch = 'A';
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}