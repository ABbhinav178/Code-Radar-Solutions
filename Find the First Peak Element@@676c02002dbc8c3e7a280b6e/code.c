#include <stdio.h>

// Function to find the first peak element in an array
int findFirstPeak(int arr[], int n) {
    if (n == 1) return arr[0]; // If only one element, it's the peak

    // Check if the first element is a peak
    if (arr[0] >= arr[1]) return arr[0];

    // Check for peak elements in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i]; // First peak found
        }
    }

    // Check if the last element is a peak
    if (arr[n - 1] >= arr[n - 2]) return arr[n - 1];

    return -1; // No peak found (this case shouldn't normally occur)
}

int main() {
    int n;

    // Input size of array

    scanf("%d", &n);

    int arr[n];

    // Input array elements

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding first peak
    int peak = findFirstPeak(arr, n);

    // Output result
    if (peak != -1) {
        printf("%d\n", peak);
    } else {
        printf("No peak value found.\n");
    }

    return 0;
}