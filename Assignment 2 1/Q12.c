#include <stdio.h>

int main() {
    const int MAX_SIZE = 100; 
    int arr[MAX_SIZE], size = 0, choice, position;
    printf("Enter number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Array before deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Choose an option to delete:\n1. Front\n2. Any Position\n3. End\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1: 
            if (size > 0) {
                for (int i = 0; i < size - 1; i++) {
                    arr[i] = arr[i + 1]; 
                }
                size--; 
            } else {
                printf("Array is empty!\n");
            }
            break;

        case 2: 
            printf("Enter position to delete (1 to %d): ", size);
            scanf("%d", &position);
            if (position >= 1 && position <= size) {
                for (int i = position - 1; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
            } else {
                printf("Invalid position!\n");
            }
            break;
        case 3:
            if (size > 0) {
                size--; 
            } else {
                printf("Array is empty!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}