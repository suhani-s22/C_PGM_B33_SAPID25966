//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int num, digit, i;
    int count[10] = {0};  // To store frequency of digits 0-9

    printf("Enter a number: ");
    scanf("%d", &num);

    // Convert number to positive (in case user enters negative)
    if (num < 0) {
        num = -num;
    }

    // Count occurrences of each digit
    while (num > 0) {
        digit = num % 10;   // extract last digit
        count[digit]++;     // increase count of that digit
        num = num / 10;     // remove last digit
    }

    // Find digit with maximum frequency
    int maxDigit = 0;
    int maxCount = count[0];

    for (i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring the most: %d (appears %d times)\n", maxDigit, maxCount);

    return 0;
}
