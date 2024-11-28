#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1; 
}
int main() {
    int marks[5];
    int count = 0; 
    int i;
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++) {
        if (isPrime(marks[i])) {
            count++; 
        }
    }
    printf("Total prime numbers in the array: %d\n", count);
    return 0;
}