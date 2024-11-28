#include <stdio.h>

int main() {
    const int MAX_SIZE = 100; 
    int arr[MAX_SIZE], size;
    int duplicates[MAX_SIZE]; 
    int duplicateCount = 0; 

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
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                int isDuplicate = 0;
                for (int k = 0; k < duplicateCount; k++) {
                    if (duplicates[k] == arr[i]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    duplicates[duplicateCount] = arr[i];
                    duplicateCount++;
                }
            }
        }
    }
    if (duplicateCount > 0) {
        printf("Duplicates: ");
        for (int i = 0; i < duplicateCount; i++) {
            printf("%d ", duplicates[i]);
        }
        printf("\n");
    } else {
        printf("-1\n");
    }

    return 0;
}