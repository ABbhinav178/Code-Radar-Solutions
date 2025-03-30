#include <stdio.h>
#include <limits.h>

int main() {
    int n, sec_large, large;

    // Input the number of elements

    scanf("%d", &n);

    if (n < 2) {  // Ensure at least two elements exist

        return 1;
    }

    int arr[n];

    // Initialize `large` and `sec_large` to the smallest possible value
    large = sec_large = INT_MIN;

    // Input the elements and find the largest and second largest

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Update largest and second largest correctly
        if (arr[i] > large) {
            sec_large = large;  // Move largest to second largest
            large = arr[i];      // Update largest
        } else if (arr[i] > sec_large && arr[i] < large) {
            sec_large = arr[i];  // Update second largest
        }
    }

    // If no second largest is found
    if (sec_large == INT_MIN) {
        printf("No second largest element found!\n");
    } else {
        printf(" %d\n", sec_large);
    }

    return 0;
}