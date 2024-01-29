// dynamic memory allocation in c

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // User input for the initial size of the array
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an integer array using calloc
    int *dynamicArray = (int *)calloc(n, sizeof(int));

    // Check if memory allocation is successful
    if (dynamicArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &dynamicArray[i]);
    }

    // Display the elements
    printf("Entered elements are: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", dynamicArray[i]);
    }

    // Resize the array using realloc
    int newSize;
    printf("\nEnter the new size of the array: ");
    scanf("%d", &newSize);

    // Resize the array using realloc
    int *resizedArray = (int *)realloc(dynamicArray, newSize * sizeof(int));

    // Check if resizing is successful
    if (resizedArray == NULL) {
        printf("Memory reallocation failed.\n");
        free(dynamicArray);
        return 1;
    }

    // Input additional elements
    printf("Enter %d additional elements:\n", newSize - n);
    for (int i = n; i < newSize; ++i) {
        scanf("%d", &resizedArray[i]);
    }

    // Display all elements in the resized array
    printf("All elements after resizing are: ");
    for (int i = 0; i < newSize; ++i) {
        printf("%d ", resizedArray[i]);
    }

    // Free dynamically allocated memory
    free(resizedArray);

    return 0;
}
