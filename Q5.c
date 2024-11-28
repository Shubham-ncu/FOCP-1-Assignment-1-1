#include <stdio.h>

int main() {
    int num, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The divisors of %d are: ", num);
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\n");
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}