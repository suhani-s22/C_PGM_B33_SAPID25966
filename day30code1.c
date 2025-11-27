//Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);    // read size of the array

    int arr[n];         // declare array

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is both max and min
    int max = arr[0];
    int min = arr[0];

    // Traverse array to find actual max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];    // update max
        }
        if(arr[i] < min) {
            min = arr[i];    // update min
        }
    }

    // Print results
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
