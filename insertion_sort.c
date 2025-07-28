#include <stdio.h>

int main() {
    int arr[11] = {4, 5, 2, 3, 8, 9, 7, 6, 10, 11, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Insertion Sort
    for (int i = 1; i < size; i++) {
        int current = arr[i];  // Store the current element
        int k = i - 1;         // Start comparing with the previous element

        // Shift elements greater than 'current' to the right
        while (k >= 0 && arr[k] > current) {
            arr[k + 1] = arr[k];  // Move the larger element up
            k--;
        }
        arr[k + 1] = current;  // Insert 'current' in its correct position
    }

    // Print sorted array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
