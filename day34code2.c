//Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[50], n, i, pos;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Position to delete
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Shift elements left
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // array size decreases

    // Print updated array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
