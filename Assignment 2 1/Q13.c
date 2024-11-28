#include <stdio.h>

int main() {
    const int MAX_SIZE = 20; 
    int arr[MAX_SIZE], size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (size > 0) {
        int lastElement = arr[size - 1]; 

        for (int i = size - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = lastElement; 
    }
    printf("Array after rotating clockwise by one: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}