//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[50], n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find the correct position for insertion
    i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];  // shift elements to the right
        i--;
    }

    arr[i + 1] = key;   // insert element at correct position
    n++;                // array size increases by 1

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
