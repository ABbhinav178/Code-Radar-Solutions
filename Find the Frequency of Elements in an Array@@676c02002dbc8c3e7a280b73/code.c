#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;

    // Input array size

    scanf("%d", &n);

    // Input array elements

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize frequency array
    }

    // Count frequency of each element
    for (i = 0; i < n; i++) {
        count = 1;
        if (freq[i] == -1) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;  // Mark as counted
                }
            }
            freq[i] = count;
        }
    }

    // Display frequencies

    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
