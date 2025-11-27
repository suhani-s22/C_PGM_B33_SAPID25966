//Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int arr[50], n, i, key;
    int low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;             // starting index
    high = n - 1;        // last index

    while (low <= high) {
        mid = (low + high) / 2;  // find middle element

        if (arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            return 0;   // end program
        }
        else if (arr[mid] < key) {
            low = mid + 1;   // search right half
        }
        else {
            high = mid - 1;  // search left half
        }
    }

    printf("Element not found.\n");

    return 0;
}
