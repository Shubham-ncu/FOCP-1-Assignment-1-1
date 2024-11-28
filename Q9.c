#include <stdio.h>

int main() {
    int rows=5;
 
    for (int i = 1; i <= rows; ++i) {
        for (int k = 1; k <= i; ++k) {
            printf("%d", k % 2);
        }
        for (int j = 1; j <= (rows - i) * 2 + 1; ++j) {
            printf(" ");
        }
            for (int k = 1; k <= i; ++k) {
                printf("%d", k % 2);
            }
        printf("\n");
    }
    return 0;
}