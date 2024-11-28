#include <stdio.h>

int main() {
    int marks[5]; 
    int i, count = 0;
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\nStudents who scored 99:\n");
    for (i = 0; i < 5; i++) {
        if (marks[i] == 99) {
            printf("Student %d\n", i + 1);
            count++; 
        }
    }
    if (count == 0) {
        printf("No student scored 99.\n");
    } else {
        printf("Total number of students who scored 99: %d\n", count);
    }
    return 0;
}