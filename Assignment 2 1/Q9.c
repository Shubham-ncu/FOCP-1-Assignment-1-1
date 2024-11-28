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
        if ((i == 0 || marks[i] >= marks[i - 1]) && (i == 4 || marks[i] >= marks[i + 1]))  {
            printf("A peak element is: %d at index %d\n", marks[i], i);
            return 0; 
        }
    }
    printf("No peak element found.\n");
    return 0;
}