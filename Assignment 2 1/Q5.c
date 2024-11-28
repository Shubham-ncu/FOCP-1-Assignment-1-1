#include <stdio.h>

int main() {
    int marks[5]; 
    int sum = 0; 
    int i;
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i]; 
    }
    printf("Sum of all scores: %d\n", sum);

    return 0;
}