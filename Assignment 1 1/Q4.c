#include <stdio.h>

int main() {
    int a, b, temp;
    // Method 1: Using a temporary variable
    printf("Enter two integers (Method 1):\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a;  
    a = b;     
    b = temp;  
    printf("After swapping (Method 1): a = %d, b = %d\n", a, b);

    // Method 2: Using addition and subtraction
    printf("\nEnter two integers (Method 2):\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a + b; 
    b = a - b; 
    a = a - b; 
    printf("After swapping (Method 2): a = %d, b = %d\n", a, b);

    // Method 3: Using multiplication and division
    printf("\nEnter two integers (Method 3):\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a * b; 
    b = a / b; 
    a = a / b; 
    printf("After swapping (Method 3): a = %d, b = %d\n", a, b);

    // Method 4: Using bitwise XOR
    printf("\nEnter two integers (Method 4):\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b; 
    printf("After swapping (Method 4): a = %d, b = %d\n", a, b);

    return 0;
}