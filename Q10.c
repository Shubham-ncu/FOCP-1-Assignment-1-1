#include <stdio.h>

int main() {
    int rows, coef = 1;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        coef = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n"); 
    }
    return 0;
}