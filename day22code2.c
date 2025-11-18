#include <stdio.h>

int main() {
    int n, i; 
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Add the first term manually (1)
    sum = 1.0;

    // Loop starts from 2nd term
    for(i = 2; i <= n; i++) {
        float numerator = (2 * i) - 1;   // 3, 5, 7, ...
        float denominator = (2 * i);     // 4, 6, 8, ...
        sum += numerator / denominator;  // Add each term to sum
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
