//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, i;
    int even = 0, odd = 0;   // counters

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // array declaration

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if number is even or odd
        if(arr[i] % 2 == 0) {
            even++;  // increase even count
        } else {
            odd++;   // increase odd count
        }
    }

    // Output results
    printf("Total Even Numbers = %d\n", even);
    printf("Total Odd Numbers = %d\n", odd);

    return 0;
}
