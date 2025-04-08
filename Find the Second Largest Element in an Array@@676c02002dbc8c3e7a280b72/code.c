#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return INT_MIN; // Not enough elements
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second; // Return -1 if no second largest found
}