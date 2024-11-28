#include <stdio.h>

int main() {
    int marks[5];
    int i;
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\nEven or Odd scores:\n");
    for (i = 0; i < 5; i++) {
        if (marks[i] % 2 == 0) {
            printf("Student %d: %d is Even\n", i + 1, marks[i]);
        } else {
            printf("Student %d: %d is Odd\n", i + 1, marks[i]);
        }
    }
    return 0;
}