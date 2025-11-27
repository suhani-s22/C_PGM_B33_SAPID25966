//Merge two arrays.
#include <stdio.h>

int main() {
    int n1, n2, i;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];   // first array

    // Input elements of first array
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];   // second array

    // Input elements of second array
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];   // third array to store merged values

    // Copy arr1 elements into merged
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy arr2 elements after arr1 elements
    for(i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];  
    }

    // Print merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

