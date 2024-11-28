#include <stdio.h>

int main() {
    float x, y; 

    printf("Enter the coordinates (x y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) {
        printf("The coordinate point (%.2f, %.2f) lies in the First quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The coordinate point (%.2f, %.2f) lies in the Second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The coordinate point (%.2f, %.2f) lies in the Third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The coordinate point (%.2f, %.2f) lies in the Fourth quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The coordinate point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("The coordinate point (%.2f, %.2f) lies on the X-axis.\n", x, y);
    } else {
        printf("The coordinate point (%.2f, %.2f) is at the origin.\n", x, y);
    }

    return 0;
}