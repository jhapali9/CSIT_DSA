// dynamic memory allocation in c++

#include <iostream>

int main() {
    int n;

    // 1. User input for the initial size of the array
    std::cout << "Enter the initial size of the array: ";
    std::cin >> n;

    // 2. Dynamically allocate memory for an integer array using new
    int* dynamicArray = new int[n];

    // 3. Input elements from the user
    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> dynamicArray[i];
    }

    // 4. Display the elements
    std::cout << "Entered elements are: ";
    for (int i = 0; i < n; ++i) {
        std::cout << dynamicArray[i] << ' ';
    }

    // 5. Resize the array using new[]
    int newSize;
    std::cout << "\nEnter the new size of the array: ";
    std::cin >> newSize;

    // 6. Resize the array using new[]
    int* resizedArray = new int[newSize];

    // 7. Copy elements from the old array to the resized array
    for (int i = 0; i < n && i < newSize; ++i) {
        resizedArray[i] = dynamicArray[i];
    }

    // 8. Delete the old array using delete[]
    delete[] dynamicArray;

    // 9. Input additional elements
    std::cout << "Enter " << newSize - n << " additional elements:\n";
    for (int i = n; i < newSize; ++i) {
        std::cin >> resizedArray[i];
    }

    // 10. Display all elements in the resized array
    std::cout << "All elements after resizing are: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << resizedArray[i] << ' ';
    }

    // 11. Delete the resized array using delete[]
    delete[] resizedArray;

    return 0;
}
