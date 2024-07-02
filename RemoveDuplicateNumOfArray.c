#include <stdio.h>

void removeDuplicates(int arr[], int *size) {
    for (int i = 0; i < *size; ++i) {
        for (int j = i + 1; j < *size; ) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left to overwrite duplicate
                for (int k = j; k < *size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                --(*size); // Decrease the size of the array
            } else {
                ++j; // Move to the next element
            }
        }
    }
}

int main() {
    int arr[100];
    int size ;
    printf("Enter the size of Array & Array :");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    printf("Original array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    removeDuplicates(arr, &size);

    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}