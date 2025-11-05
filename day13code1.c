
// Program to implement a basic calculator using switch-case
// It performs +, -, *, /, and % operations

#include <stdio.h>
// Includes the standard input-output library (for printf and scanf functions)

int main() {
// The main function — where the program starts running

    char op;
    // Declares a character variable 'op' to store the operator (+, -, *, /, %)

    int num1, num2;
    // Declares two integer variables to store the numbers entered by the user

    printf("Enter an operator (+, -, *, /, %): ");
    // Asks the user to enter the operation symbol

    scanf("%c", &op);
    // Reads the operator entered by the user and stores it in 'op'

    printf("Enter two numbers: ");
    // Asks the user to enter two integer numbers

    scanf("%d %d", &num1, &num2);
    // Reads the two integers and stores them in num1 and num2

    switch (op) {
    // The switch statement checks the value of 'op'
    // and runs the matching case block

        case '+':
            printf("Result = %d\n", num1 + num2);
            // If user entered '+', this block runs and prints sum
            break;
            // 'break' stops checking further cases

        case '-':
            printf("Result = %d\n", num1 - num2);
            // If user entered '-', prints the difference
            break;

        case '*':
            printf("Result = %d\n", num1 * num2);
            // If user entered '*', prints the multiplication result
            break;

        case '/':
            if (num2 != 0) {
                printf("Result = %d\n", num1 / num2);
                // Checks to avoid dividing by zero
                // If num2 is not 0, performs division
            } else {
                printf("Division by zero is not allowed.\n");
                // If num2 is 0, prints error message
            }
            break;

        case '%':
            if (num2 != 0) {
                printf("Result = %d\n", num1 % num2);
                // If user entered '%', prints remainder
            } else {
                printf("Division by zero is not allowed.\n");
                // Remainder with 0 also not allowed
            }
            break;

        default:
            printf("Invalid operator!\n");
            // If user entered an operator other than +, -, *, /, or %
            // This block runs
    }

    return 0;
    // Ends the program and returns 0 to show successful execution
}
