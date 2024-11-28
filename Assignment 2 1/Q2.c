#include <stdio.h>

int main() {
    int marks[5];
    int i;
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nGrades of students:\n");
    for (i = 0; i < 5; i++) {
        if (marks[i] >= 75) {
            printf("Student %d: A Grade\n", i + 1);
        } else if (marks[i] >= 60) {
            printf("Student %d: B Grade\n", i + 1);
        } else if (marks[i] >= 40) {
            printf("Student %d: C Grade\n", i + 1);
        } else {
            printf("Student %d: D Grade\n", i + 1);
        }
    }

    return 0;
}