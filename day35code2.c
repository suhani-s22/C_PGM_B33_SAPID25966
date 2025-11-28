//Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int arr[50], n, i, k;
    int temp;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    // Reduce k if k > n
    k = k % n;

    // Perform rotation k times
    while (k > 0) {
        temp = arr[n - 1];   // store last element

        // shift elements to the right
        for (i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;       // place last element at first position
        k--;
    }

    // Print result
    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
