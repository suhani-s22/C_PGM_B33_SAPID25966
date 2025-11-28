//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[50], n, i;
    int largest, secondLargest;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // At least 2 elements are required
    if (n < 2) {
        printf("Second largest does not exist.\n");
        return 0;
    }

    // Input array
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    largest = arr[0];
    secondLargest = -999999; // very small number

    // Find largest and second largest
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;   // update second largest
            largest = arr[i];          // update largest
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Output result
    printf("Second largest element = %d\n", secondLargest);

    return 0;
}
