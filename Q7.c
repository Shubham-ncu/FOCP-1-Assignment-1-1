#include <stdio.h>
#include <math.h>

void binaryToDecimal() {
    long long binary;
    int decimal = 0, remainder, base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10; 
        base *= 2; 
    }

    printf("The decimal equivalent is: %d\n", decimal);
}

void decimalToBinary() {
    int decimal;
    long long binary = 0;
    int remainder, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2; 
        binary += remainder * base; 
        decimal /= 2;
        base *= 10; 
    }

    printf("The binary equivalent is: %lld\n", binary);
}

int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        binaryToDecimal();
    } else if (choice == 2) {
        decimalToBinary();
    } else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}