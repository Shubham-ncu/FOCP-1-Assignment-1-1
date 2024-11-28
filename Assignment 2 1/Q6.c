#include <stdio.h>

int main() {
    int marks[5]; 
    int sum = 0; 
    float average; 
    int i;
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i]; 
    }
    average = sum / 5.0;

    printf("Average score: %.2f\n", average);

    return 0;
}