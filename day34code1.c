//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int arr[50], n, i, pos, value;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and new value
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for (i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[pos - 1] = value;
    n++;   // Increase array size

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
