// Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);  // Take size of array

    int arr[n];  // Declare array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element
        sum = sum + arr[i];   // Add element to sum
    }

    // Print the result
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
