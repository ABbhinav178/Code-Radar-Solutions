#include <stdio.h>

int main() {
    float cost_price, selling_price;

    // Input cost price and selling price

    scanf("%f", &cost_price);

    printf("Enter the Selling Price: ");
    scanf("%f", &selling_price);

    // Check for profit, loss, or no profit/no loss
    if (selling_price > cost_price) {
        printf("Profit: %.2f\n", selling_price - cost_price);
    } 
    else if (selling_price < cost_price) {
        printf("Loss: %.2f\n", cost_price - selling_price);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}