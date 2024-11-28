#include <stdio.h>
#define MAX_SIZE 5
void printArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[MAX_SIZE], size = 0, choice, position, value;
    printf("Enter number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printArray(arr, size); 
    printf("Choose an option to insert:\n1. Front\n2. Any Position\n3. End\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1: 
            if (size < MAX_SIZE) {
                printf("Enter value to insert at front: ");
                scanf("%d", &value);
                for (int i = size; i > 0; i--) arr[i] = arr[i - 1];
                arr[0] = value;
                size++;
            } else {
                printf("Array is full!\n");
            }
            break;
        case 2:
            printf("Enter position (1 to %d): ", size + 1);
            scanf("%d", &position);
            if (position >= 1 && position <= size + 1 && size < MAX_SIZE) {
                printf("Enter value to insert: ");
                scanf("%d", &value);
                for (int i = size; i >= position; i--) arr[i] = arr[i - 1];
                arr[position - 1] = value;
                size++;
            } else {
                printf("Invalid position or array is full!\n");
            }
            break;
        case 3: 
            if (size < MAX_SIZE) {
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                arr[size++] = value;
            } else {
                printf("Array is full!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    printArray(arr, size); 
    return 0;
}