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
        marks[i] += 5;
    }
    printf("\nUpdated marks after increasing by 5:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }
    return 0;
}
