#include <stdio.h>

int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);

    int updatedNum = num | (1 << pos); // Set the nth bit using bitwise OR

    printf("%d\n", updatedNum); // Print the updated number
    return 0;
}