#include <stdio.h>

int main() {
    // Initialize an array with 10 elements (can contain duplicates)
    int arr[10] = {4, 2, 8, 4, 9, 2, 8, 1, 6, 9};
    int n = 10;
    int i, j, k;

    printf("Original list: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Outer loop to select an element
    for (i = 0; i < n; i++) {
        // Inner loop to compare the selected element with subsequent elements
        for (j = i + 1; j < n; j++) {
            // If a duplicate is found
            if (arr[i] == arr[j]) {
                // Shift subsequent elements to the left to overwrite the duplicate
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                // Decrease the size of the array
                n--;

                // Decrement j to check the element at the same index
                // in the next iteration, as it's a new, unverified value
                j--;
            }
        }
    }

    // Display the list after deleting duplicates
    printf("\nList after deleting duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
