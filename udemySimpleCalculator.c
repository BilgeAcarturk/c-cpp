#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Infinite loop to continuously prompt the user for input
    while (1) {
        // Prompt the user for the operator
        printf("Enter operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        // Check if the user wants to quit
        if (operator == 'q' || operator == 'Q') {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        // Prompt the user for two numbers
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        // Perform the operation based on the operator
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                // Check if the second number is not zero to avoid division by zero
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error: Division by zero!\n");
                    continue; // Skip to the next iteration of the loop
                }
                break;
            default:
                printf("Error: Invalid operator!\n");
                continue; // Skip to the next iteration of the loop
        }

        // Display the result
        printf("Result: %.2lf\n", result);
    }

    return 0;
}