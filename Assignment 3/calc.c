#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;
    printf("Welcome to the Simple Calculator!\n");
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithmic value (base 10)\n");
    printf("6. Square root\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case 2: 
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case 4: 
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 5: 
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 > 0) {
                result = log10(num1);
                printf("Logarithmic value (base 10): %.2lf\n", result);
            } else {
                printf("Error: Logarithm of non-positive number is not defined.\n");
            }
            break;
        case 6: 
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Square root: %.2lf\n", result);
            } else {
                printf("Error: Square root of negative number is not defined.\n");
            }
            break;

        default:
            printf("Invalid choice! Please select a valid operation (1-6).\n");
            break;
    }

    return 0;
}
