#include <stdio.h>

int main() {
    int num;

    // Input the number

    scanf("%d", &num);

    // Check even or odd using division
    if ((num / 2) * 2 == num) {
        printf("Even\n");
    } 
    else {
        printf("Odd\n");
    }

    return 0;
}