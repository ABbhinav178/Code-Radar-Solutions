#include <stdio.h>

int main() {
    float temperature;

    // Input temperature

    scanf("%f", &temperature);

    // Check if the temperature is freezing or above freezing
    if (temperature <= 0) {
        printf("Freezing\n");
    } else {
        printf("Above Freezing\n");
    }

    return 0;
}