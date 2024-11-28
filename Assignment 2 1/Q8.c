#include <stdio.h>

int main() {
    int marks[5]; 
    int max, min; 
    int i;
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    max = min = marks[0];
    for (i = 1; i < 5; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }
    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}