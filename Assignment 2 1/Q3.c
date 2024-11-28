#include <stdio.h>

int main() {
    int marks[5]; 
    int i;
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++) {
        if (marks[i] == 99) {
            printf("The first student to score 99 is Student %d.\n", i + 1);
            break; 
        }
    }

    if (i == 5) {
        printf("No student scored 99.\n");
    }

    return 0;
}