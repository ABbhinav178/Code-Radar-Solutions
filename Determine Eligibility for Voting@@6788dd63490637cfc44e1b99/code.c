#include <stdio.h>

int main() {
    int age;



    scanf("%d", &age);


    if (age >= 18) {
        printf("Eligible \n");
    } 
    else if (age >= 0) {
        printf("Not Eligible \n");
    } 
    else {
        printf("Invalid age\n");
    }

    return 0;
}