#include <stdio.h>

int main() {
    float cost_price, selling_price;

    // Input cost price and selling price

    scanf("%f", &cost_price);


    scanf("%f", &selling_price);

    // Check for profit, loss, or no profit/no loss
    if (selling_price > cost_price) {
        printf("Profit", selling_price - cost_price);
    } 
    else if (selling_price < cost_price) {
        printf("Loss", cost_price - selling_price);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}