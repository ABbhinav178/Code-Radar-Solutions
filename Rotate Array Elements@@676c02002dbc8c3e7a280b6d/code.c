#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n; // In case k > n
    int temp[k];

    // Store last k elements in temp
    for (int i = 0; i < k; i++)
        temp[i] = arr[n - k + i];

    // Shift remaining elements right
    for (int i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];

    // Copy back temp elements
    for (int i = 0; i < k; i++)
        arr[i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rotateRight(arr, n, k);


    for (int i = 0; i < n; i++)
        printf("%d\n ", arr[i]);

    return 0;
}